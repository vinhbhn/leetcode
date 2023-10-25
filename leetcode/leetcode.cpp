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

// 15ms 18.2MB
//long long maximumTripletValue(vector<int>& nums) {
//	long long maxV = 0, n = nums.size();
//	for (int i = 0; i < n - 2; i++)
//	{
//		for (int j = i + 1; j < n - 1; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				maxV = max(maxV, (long long)(nums[i] - nums[j]) *nums[k]);
//			}
//		}
//	}
//
//	return maxV;
//}

// web 6ms, 18.4MB
long long maximumTripletValue(vector<int>& nums) {
	int n = nums.size();
	vector<int> left(n);
	left[0] = nums[0];
	for (int i = 1; i < n; i++)
		left[i] = max(left[i - 1], nums[i]);

	vector<int> right(n);
	right[n - 1] = nums[n - 1];
	for (int i = n - 2; i >= 0; i--)
		right[i] = max(right[i + 1], nums[i]);

	long res = 0;
	for (int i = 1; i < n - 1; i++)
	{
		long val = (long)(left[i - 1] - nums[i]) * (long)(right[i + 1]);
		res = max(res, val);
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
