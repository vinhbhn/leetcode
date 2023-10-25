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

// worked, 4ms 8.8MB
//int arithmeticTriplets(vector<int>& nums, int diff) {
//	int count = 0;
//	for (int i = 0; i < nums.size() - 2; i++)
//	{
//		for (int j = i + 1; j < nums.size() - 1; j++)
//		{
//			if (nums[j] - nums[i] == diff)
//			{
//				for (int k = j + 1; k < nums.size(); k++)
//				{
//					if (nums[k] - nums[j] == diff)
//						count++;
//				}
//			}
//		}
//	}
//
//	return count;
//}

//https://leetcode.com/problems/number-of-arithmetic-triplets/solutions/2392136/c-easy-hashmap-solution-with-explanation/
// 3ms 9.6MB
int arithmeticTriplets(vector<int>& nums, int diff) {
	int count = 0;
	unordered_map<int, bool> mp;
	for (auto num : nums)
		mp[num] = true;

	// For every element say 'elm' check if there exist both number,
	// (elm + diff) and (elm - diff) inside map. If yes then increment count
	for (auto num : nums)
		if (mp[num - diff] && mp[num + diff])
			count++;

	return count;
}


int main()
{
	cout << boolalpha;

	cout << sumOfMultiples(7) << '\n';
	cout << sumOfMultiples(10) << '\n';
	cout << sumOfMultiples(9) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
