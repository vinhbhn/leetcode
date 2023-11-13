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

// 26ms 22.4MB O(nlogn) O(n)
int largestPerimeter(vector<int>& nums) {
	int res = 0;

	sort(nums.begin(), nums.end());
	for (int i = nums.size() - 1; i >= 2; i--)
	{
		if (nums[i] < nums[i - 1] + nums[i - 2])
			res = max(res, nums[i] + nums[i - 1] + nums[i - 2]);
	}

	return res;
}

// 26ms 22.4MB O(nlogn) O(n)
int largestPerimeter(vector<int>& nums) {
	int res = 0;

	sort(nums.begin(), nums.end());
	for (int i = nums.size() - 1; i >= 2; i--)
	{
		// after the array is sorted, 3 last element is largest of array
		// so if 3 element is a triangle, it's the largest perimeter
		if (nums[i] < nums[i - 1] + nums[i - 2])
			return nums[i] + nums[i - 1] + nums[i - 2]; 

	}

	return res;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
