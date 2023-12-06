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

// 0ms 9.3MB O(n) O(n)
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
	int n = candies.size();
	auto greatest = max_element(candies.begin(), candies.end());
	vector<bool> res;

	for (int i = 0; i < n; i++)
	{
		if (candies[i] + extraCandies >= *greatest)
			res.push_back(true);
		else
			res.push_back(false);
	}

	return res;
}


int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
