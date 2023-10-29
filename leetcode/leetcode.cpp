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

// 0ms 9.7MB
vector<int> numberOfPairs(vector<int>& nums) {
	int pairs = 0, left = 0;
	unordered_map<int, int> mp;
	for (auto num : nums)
		mp[num]++;

	for (auto& x : mp)
	{
		if (x.second % 2 == 0)
		{
			pairs += x.second / 2;
		}
		else
		{
			pairs += (x.second - 1) / 2;
			left++;
		}
	}

	return { pairs, left };
}

int main()
{
	cout << boolalpha;
	vector<int> arr = { 1,0,2,3,0,4,5,0 };
	cout << duplicateZeros(arr) << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
