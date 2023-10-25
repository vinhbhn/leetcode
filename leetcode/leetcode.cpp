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

// 7ms 21.1MB
//int minimumSum(vector<int>& nums) {
//	int minSum = INT_MAX, sum = 0, n = nums.size();
//	bool haveTriplet = false;
//	for (int i = 0; i < n - 2; i++)
//	{
//		for (int j = i + 1; j < n - 1; j++)
//		{
//			if (nums[i] < nums[j])
//			{
//				for (int k = j + 1; k < n; k++)
//				{
//					if (nums[k] < nums[j])
//					{
//						haveTriplet = true;
//						sum = nums[i] + nums[j] + nums[k];
//						minSum = min(minSum, sum);
//					}
//				}
//			}
//		}
//	}
//
//
//	return haveTriplet ? minSum : -1;
//}


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
