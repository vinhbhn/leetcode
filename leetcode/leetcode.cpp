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

// 46/46 passed but take too long O(n^2) like brute force
int hammingDistance(int x, int y) {
	bitset<32> res(x ^ y);
	return res.count();
}
int totalHammingDistance(vector<int>& nums) {
	int count = 0;
	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			count += hammingDistance(nums[i], nums[j]);
		}
	}

	return count;
}

// https://leetcode.com/problems/total-hamming-distance/solutions/96243/share-my-o-n-c-bitwise-solution-with-thinking-process-and-explanation/
// 48ms 19.4MB
int totalHammingDistance(vector<int>& nums) {
	int ans = 0, n = nums.size();
	if (n < 2) return 0;
	int zeroOne[2] = { 0, 0 }; // use stack (but no need to call delete function)
	while (true)
	{
		int zeroCount = 0;
		zeroOne[0] = 0;
		zeroOne[1] = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
				zeroCount++;
			zeroOne[nums[i] % 2]++;
			nums[i] >>= 1;
		}
		ans += zeroOne[0] * zeroOne[1];
		if (zeroCount == nums.size())
			return ans;
	}

	return 0;
}
// 57 and 61ms 19.3MB
int totalHammingDistance(vector<int>& nums) {
	int ans = 0, n = nums.size();
	if (n < 2) return 0;
	int* zeroOne = new int[2]; // use array dynamically
	while (true)
	{
		int zeroCount = 0;
		zeroOne[0] = 0;
		zeroOne[1] = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
				zeroCount++;
			zeroOne[nums[i] % 2]++;
			nums[i] >>= 1;
		}
		ans += zeroOne[0] * zeroOne[1];
		if (zeroCount == nums.size())
			return ans;
	}

	delete zeroOne;
	return 0;
}

// https://leetcode.com/problems/total-hamming-distance/solutions/1585848/c-easy-and-concise-solutions/
// 37ms 19.6MB O(n) O(1)
int totalHammingDistance(vector<int>& nums) {
	int n = nums.size(), ans = 0;
	for (int i = 0; i < 32; i++)
	{
		int count = 0; // count of the no.of elements that have the 'i'th bitset
		for (int k = 0; k < n; k++)
		{
			count += (nums[k] >> i) & 1;
		}
		ans += count * (n - count);
	}

	return ans;
}

int main() {
	cout << boolalpha;


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
