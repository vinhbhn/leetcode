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

// 13ms 12.6MB O(n^2) O(1)
int countKDifference(vector<int>& nums, int k) {
	int count = 0;
	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (abs(nums[i] - nums[j]) == k)
				count++;
		}
	}

	return count;
}

// web 0ms real 0ms 12.9MB 
int countKDifference(vector<int>& nums, int k) {
	int count = 0;
	vector<int> m(101);
	for (auto num : nums)
		m[num]++;

	for (int i = 1; i < 101 - k; i++)
	{
		count += m[i] * m[i + k];
	}

	return count;
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
