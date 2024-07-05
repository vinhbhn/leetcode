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

// O(nlogn) O(n) 12ms 25MB
//double minimumAverage(vector<int>& nums) {
//	sort(nums.begin(), nums.end());
//
//	// based on problem conditions
//	double min_average = 50.0;
//
//	int i = 0, j = nums.size() - 1;
//	while (i < j)
//	{
//		double num = (nums[i] + nums[j]) / 2.0;
//		min_average = min(min_average, num);
//
//		i++;
//		j--;
//	}
//
//	return min_average;
//}

// O(nlogn) O(n) 11ms 25MB
double minimumAverage(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int n = nums.size();

	// based on problem conditions
	double min_average = 50.0;

	for (int i = 0; i < n / 2; i++)
	{
		double num = (nums[i] + nums[n - 1 - i]) / 2.0;
		min_average = min(min_average, num);
	}

	return min_average;
}

int main() {
	cout << boolalpha;

	vector<int>  nums = { 7, 8, 3, 4, 15, 13, 4, 1 };
	cout << minimumAverage(nums) << '\n';

	nums = { 1,9,8,3,10,5 };
	cout << minimumAverage(nums) << '\n';


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
