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

// Method to compare which one is the more close.
// we find the closest by taking the diffrence
// between the target and both values. It assumes
// that val2 is greater than cal1 and target lies
// between these two.
int getClosest(int val1, int val2, int target)
{
	if (target - val1 >= val2 - target)
		return val2;
	else
		return val1;
}
// O(logN) O(logN) due to recursion
// binary search
int findClosest(std::vector<int> arr, int target)
{
	int n = arr.size();
	// corner cases
	// left-side case
	if (target <= arr[0])
		return arr[0];
	// right-side case
	if (target >= arr[n - 1])
		return arr[n - 1];

	// doing binary search
	int i = 0, j = n, mid = 0;
	while (i < j)
	{
		mid = (i + j) / 2;

		if (arr[mid] == target)
			return arr[mid];

		// If target is less than array element,
		// then search in left
		if (target < arr[mid])
		{
			// if target is grearter than previous
			// to mid, return closest of two
			if (mid > 0 && target > arr[mid - 1])
				return getClosest(arr[mid - 1], arr[mid], target);

			j = mid;
		}
		else {
			// repeat for left half
			// if target is greater than mid
			if (mid < n - 1 && target < arr[mid + 1])
				return getClosest(arr[mid], arr[mid + 1], target);

			// update i
			i = mid + 1;
		}
	}

	// only single element left after search
	return arr[mid];
}
// O(n logN) 
//int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
//	std::sort(arr2.begin(), arr2.end());
//
//	int sum = 0, closest = 0;
//	for (int i = 0; i < arr1.size(); i++)
//	{
//		// closest = arr2[j]
//		closest = findClosest(arr2, arr1[i]);
//		// the distance value is defined as the number of elements arr[i]
//		// such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d;
//		if (std::abs(arr1[i] - closest) > d)
//			++sum;
//	}
//
//	return sum;
//}

// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/solutions/1916796/runtime-0-ms-faster-than-100-00-of-c-binary-search-easy-simple-approach/
// binary search, shorter code than above
//int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
//	std::sort(arr2.begin(), arr2.end());
//	int count = 0;
//	for (int i = 0; i < arr1.size(); i++)
//	{
//		int l = 0, r = arr2.size() - 1, x = arr1[i] - d, y = arr1[i] + d;
//
//		while (l <= r)
//		{
//			int mid = l + (r - l) / 2;
//			if (arr2[mid] < x)
//			{
//				l = mid + 1;
//			}
//			else if (arr2[mid] > y)
//			{
//				r = mid - 1;
//			}
//			else
//			{
//				count++;
//				break;
//			}
//		}
//	}
//
//	return arr1.size() - count;
//}

// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/solutions/3332253/c-binary-search-with-clear-explanation/
int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
	std::sort(arr2.begin(), arr2.end());
	int count = 0;
	for (int i = 0; i < arr1.size(); i++)
	{
		int l = 0, r = arr2.size() - 1, mid = 0;
		while (l <= r)
		{
			mid = l + (r - l) / 2;
			if (std::abs(arr1[i] - arr2[mid]) <= d)
			{
				break;
			}
			if (arr2[mid] < arr1[i])
				l = mid + 1;
			else
				r = mid - 1;
		}

		if (l > r)
			count++;
	}
	return count;
}

int main()
{
	// ok, tested
	/*std::vector<int> test = { 1,2,5,6,15,18 };
	std::cout << findClosest(test, 12);*/

	std::vector<int> arr1 = { 4,5,8 };
	std::vector<int> arr2 = { 10,9,1,8 };
	int d = 2;
	std::cout << findTheDistanceValue(arr1, arr2, d) << '\n';

	arr1 = { 1,4,2,3 };
	arr2 = { -4,-3,6,10,20,30 };
	d = 3;
	std::cout << findTheDistanceValue(arr1, arr2, d) << '\n';

	arr1 = { 2, 1, 100, 3 }; arr2 = { -5, -2, 10, -3, 7 }; d = 6;
	std::cout << findTheDistanceValue(arr1, arr2, d) << '\n';

	arr1 = { -3,10,2,8,0,10 };
	arr2 = { -9,-1,-4,-9,-8 };
	d = 9;
	std::cout << findTheDistanceValue(arr1, arr2, d) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
