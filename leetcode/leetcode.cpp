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

// 36ms 71MB O(n+k)
int maximizeSum(vector<int>& nums, int k) {
	int largestNum = *max_element(nums.begin(), nums.end());
	int sum = largestNum;

	k--; // after init sum = largest element in num
	while (k)
	{
		largestNum++;
		sum += largestNum;

		k--;
	}

	return sum;
}

// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/solutions/3466875/very-simple-easy-to-understand-solution/
// 34ms 71.1MB O(n+k)
int sumUptoN(int n)
{
	return (n * (n + 1) / 2);
}
int maximizeSum(vector<int>& nums, int k) {
	int largestNum = *max_element(nums.begin(), nums.end());
	return sumUptoN(largestNum+k-1) - sumUptoN(largestNum-1);
}

// web 4ms real 16ms 71.1MB O(n)
int maximizeSum(vector<int>& nums, int k) {
	int largestNum = *max_element(nums.begin(), nums.end());
	double k_over_2 = k / 2.0;
	return k * largestNum + k_over_2 * (k+1) - k;
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
