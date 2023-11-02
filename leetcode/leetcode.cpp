#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>
#include <unordered_set>
#include <set>
#include <numeric>
#include <sstream>
#include <queue>
#include<map>
#include <charconv>

using namespace std;

// 0ms 10.7MB O(n) O(1)
int findLucky(vector<int>& arr) {
	unordered_map<int, int> mp;
	for (auto num : arr)
		mp[num]++;

	int lucky = -1;
	for (auto& x : mp)
		if (x.first == x.second)
			lucky = max(lucky, x.first);

	return lucky;
}

// 7ms 10.8MB O(n) O(1)
int findLucky(vector<int>& arr) {
	vector<int> v(501, 0);
	for (auto num : arr)
		v[num]++;

	int lucky = -1;
	for (int i = 1; i < v.size(); i++)
		if (i == v[i])
			lucky = max(lucky, i);

	return lucky;
}


int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
