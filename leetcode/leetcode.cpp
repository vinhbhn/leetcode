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

// 9ms 12.8MB O(n-quater) O(1)
int findSpecialInteger(vector<int>& arr) {
	int n = arr.size(), quarter = n /  4;
	for (int i = 0; i < n - quarter; i++)
	{
		if (arr[i] == arr[i + quarter]) 
			return arr[i];
	}

	return -1;
}

// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/solutions/4388310/video-give-me-5-minutes-2-solutions-how-we-think-about-a-solution/?envType=daily-question&envId=2023-12-11
// 12ms 12.7MB O(clogn) O(1) c = (n-quarter)/quarter
int binarySearch(const vector<int>& arr, int target, bool isFirst)
{
	int left = 0, right = arr.size() - 1, result = -1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == target)
		{
			result = mid;
			if (isFirst)
				right = mid - 1;
			else
				left = mid + 1;
		}
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return result;
}
int findSpecialInteger(vector<int>& arr) {
	int n = arr.size(), quarter = n / 4;

	// Handle the case where quater is zero
	if (quarter == 0)
		return (n > 0) ? arr[0] : -1;

	// Check every possible candidate element
	for (int i = quarter; i < n; i += quarter)
	{
		// Use binary search to find the first and last occurrence of the card
		int leftOccurrence = binarySearch(arr, arr[i], true);
		int rightOccurrence = binarySearch(arr, arr[i], false);

		// Check if the frequency is greater than 25%
		if (rightOccurrence - leftOccurrence + 1 > quarter)
			return arr[i];
	}

	return -1;
}




int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
