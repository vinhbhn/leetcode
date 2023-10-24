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

//int unequalTriplets(vector<int>& nums) {
//	int count = 0;
//	for (int i = 0; i < nums.size() - 2; i++)
//	{
//		for (int j = i + 1; j < nums.size() - 1; j++)
//		{
//			if (nums[i] != nums[j])
//			{
//				for (int k = j + 1; k < nums.size(); k++)
//				{
//					if (nums[i] != nums[k] && nums[j] != nums[k])
//						count++;
//				}
//			}
//		}
//	}
//
//	return count;
//}

//https://leetcode.com/problems/number-of-unequal-triplets-in-array/solutions/2832078/python-c-javascript-o-n-beats-100/
// O(n) O(n) Calculate the sum of prev freq & next freq and sum them: 0ms
int unequalTriplets(vector<int>& nums) {
	int count = 0, prev = 0, nxt = nums.size();
	unordered_map<int, int> frequency;

	for (auto n : nums)
		frequency[n]++;

	for (auto &[n, freq] : frequency)
	{
		nxt -= freq;
		count += prev * freq * nxt;
		prev += freq;
	}
	
	return count;
}


int main()
{
	cout << boolalpha;

	vector<int> num = { 4,4,2,4,3 };
	cout << unequalTriplets(num) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
