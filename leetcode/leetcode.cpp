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

// 13ms 22.2MB O(m+n+k) O(m+n+k) k = check.size()
int minNumber(vector<int>& nums1, vector<int>& nums2) {
	int m1 = 9, m2 = 9;

	// find one digit exists in both array
	vector<int> check(10, 0);
	for (auto num : nums1)
	{
		check[num]++;
		m1 = min(m1, num);
	}
	for (auto num : nums2)
	{
		check[num]++;
		m2 = min(m2, num);
	}
	for (int i = 1; i < 10; i++)
	{
		if (check[i] >= 2)
			return i;
	}

	// find min digit in nums1 and nums2 then merge them
	if (m1 > m2)
		swap(m1, m2);

	return m1 * 10 + m2; // smallest number
}

// 3ms 22.1MB O(mlogm+nlogn) O(m+n)
int minNumber(vector<int>& nums1, vector<int>& nums2) {
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	// find one digit exists in both array
	vector<int> check(10, 0);
	for (auto num : nums1)
	{
		check[num]++;
	}
	for (auto num : nums2)
	{
		check[num]++;
		if (check[num] == 2)
			return num;
	}

	// find min digit in nums1 and nums2 then merge them
	int m1 = nums1[0], m2 = nums2[0];
	if (m1 > m2)
		swap(m1, m2);

	return m1 * 10 + m2; // smallest number
}

int minNumber(vector<int>& nums1, vector<int>& nums2) {
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	// find one digit exists in both array
	vector<int> check(10, 0);
	for (auto num : nums1)
	{
		check[num]++;
	}
	for (auto num : nums2)
	{
		if (++check[num] == 2)
			return num;
	}

	// find min digit in nums1 and nums2 then merge them
	int m1 = nums1[0], m2 = nums2[0];
	if (m1 > m2)
		swap(m1, m2);

	return m1 * 10 + m2; // smallest number
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
