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

// 121ms 11MB
//int countQuadruplets(vector<int>& nums) {
//	int count = 0, n = nums.size();
//	for (int i = 0; i < n - 3; i++)
//	{
//		for (int j = i + 1; j < n - 2; j++)
//		{
//			for (int k = j + 1; k < n - 1; k++)
//			{
//				for (int l = k + 1; l < n; l++)
//				{
//					if (nums[i] + nums[j] + nums[k] == nums[l])
//						count++;
//				}
//			}
//		}
//	}
//
//	return count;
//}

// web 4ms 10.9MB
int countQuadruplets(vector<int>& nums) {
		int res = 0, n = nums.size();
		vector<int> sum(201, 0);
		for (int i = 1; i < n - 2; i++)
		{
			for (int j = 0; j < i; j++)
				sum[nums[i] + nums[j]]++;

			for (int j = i + 2; j < n; j++)
			{
				int diff = nums[j] - nums[i + 1];
				res = diff > 0 ? res + sum[diff] : res;
			}
		}

		return res;
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
