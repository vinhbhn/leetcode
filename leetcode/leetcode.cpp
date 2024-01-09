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

// 11ms 26.8MB O(n1 + n2 + n3 + res)
vector<int> countFreq(vector<int>& v, vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		v[nums[i]]++;
	}

	return v;
}
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
	vector<int> n1(101, 0), n2(101, 0), n3(101, 0);

	countFreq(n1, nums1);
	countFreq(n2, nums2);
	countFreq(n3, nums3);

	vector<int> res;
	for (int i = 1; i <= 100; i++)
	{
		if ((n1[i] and n2[i]) or (n1[i] and n3[i]) or (n2[i] and n3[i]))
			res.push_back(i);
	}

	return res;
}

// web 0ms real 12ms 25.6MB
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
	bitset<101> bit1, bit2, bit3;

	for (const int& num : nums1) bit1.set(num);
	for (const int& num : nums2) bit2.set(num);
	for (const int& num : nums3) bit3.set(num);

	vector<int> res;
	bitset<101> intersect = (bit1 & bit2) | (bit1 & bit3) | (bit2 & bit3);

	for (size_t i = 0; i < intersect.size(); i++)
	{
		if (intersect[i])
			res.push_back(static_cast<int>(i));
	}

	return res;
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
