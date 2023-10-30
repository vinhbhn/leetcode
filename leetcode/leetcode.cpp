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

// 117 ms 46.9MB O(nlogn) O(n)
//vector<int> findDuplicates(vector<int>& nums) {
//	map<int, int> mp;
//	for (auto num : nums)
//		mp[num]++;
//
//	vector<int> res;
//	for (auto& x : mp)
//		if (x.second >= 2)
//			res.push_back(x.first);
//
//	return res;
//}

// 52ms 33.9MB O(n) O(1)
//vector<int> findDuplicates(vector<int>& nums) {
//	sort(nums.begin(), nums.end());
//	vector<int> res;
//	for (int i = 0; i < nums.size() -1;)
//	{
//		if (nums[i] == nums[i + 1])
//		{
//			res.push_back(nums[i]);
//			i += 2;
//		}
//		else
//			i++;
//	}
//
//	return res;
//}

// web 19ms real 37ms 33.9MB O(n) O(1)
vector<int> findDuplicates(vector<int>& nums) {
	vector<int> res;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[abs(nums[i]) - 1] > 0)
			nums[abs(nums[i]) - 1] *= -1;
		else if (nums[abs(nums[i]) - 1] < 0)
			res.push_back(abs(nums[i]));
	}

	return res;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
