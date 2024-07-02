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

int addedInteger(vector<int>& nums1, vector<int>& nums2) {
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	// find the minimum of two arrays
	// "x" is 
	return nums2[0] - nums1[0];
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
