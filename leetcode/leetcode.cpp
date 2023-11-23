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

// 36ms 36.5MB
int findMaxConsecutiveOnes(vector<int>& nums) {
	int count = (nums[0] == 1) ? 1 : 0;
	int res = 0;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] == 1)
			count++;
		else
		{
			res = max(res, count);
			count = 0;
		}
	}

	// last element in nums vector
	res = max(res, count);
	return res;
}

// 24ms 36.5MB O(n) O(n)
int findMaxConsecutiveOnes(vector<int>& nums) {
	int res = 0, count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == 1)
		{
			count++;
			res = max(res, count);
		}
		else
			count = 0;
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
