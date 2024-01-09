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

// 40ms 65.8MB
vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
	unordered_set st1(nums1.begin(), nums1.end());
	unordered_set st2(nums2.begin(), nums2.end());

	vector<int> res;
	int count = 0;
	for (int num : nums1)
	{
		if (st2.contains(num))
			count++;
	}
	res.push_back(count);
	count = 0;
	for (int num : nums2)
	{
		if (st1.contains(num))
			count++;
	}
	res.push_back(count);

	return res;
}

// 14ms 61MB
vector<bool> countFreq(vector<bool>& v, vector<int>& nums)
{
	for (int& num : nums)
		v[num] = true;

	return v;
}
int countInter(vector<int>& nums, vector<bool>& v)
{
	int count = 0;
	for (int& num : nums)
	{
		if (v[num])
			count++;
	}

	return count;
}
vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
	vector<bool> v1(101, false), v2(101, false);
	countFreq(v1, nums1);
	countFreq(v2, nums2);

	vector<int> res;
	res.push_back(countInter(nums1, v2));
	res.push_back(countInter(nums2, v1));

	return res;
}


// 19ms 60.9MB
vector<bool> countFreq(vector<bool>& v, vector<int>& nums)
{
	for (int& num : nums)
		v[num] = true;

	return v;
}
int countInter(vector<int>& nums, vector<bool>& v)
{
	int count = 0;
	for (int& num : nums)
	{
		if (v[num])
			count++;
	}

	return count;
}
vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
	vector<bool> v1(101, false), v2(101, false);
	countFreq(v1, nums1);
	countFreq(v2, nums2);

	return { countInter(nums1, v2), countInter(nums2, v1) };
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
