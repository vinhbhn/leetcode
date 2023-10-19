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

vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
	if (nums.size() < indexDifference)
		return { -1, -1 };

	for (int i = 0; i < nums.size() - indexDifference; i++)
	{
		for (int j = i + indexDifference; j < nums.size(); j++)
		{
			if (abs(nums[i] - nums[j]) >= valueDifference)
				return { i, j };
		}
	}

	return { -1, -1 };
}

int main()
{
	{
		vector<int> nums = { {0,1}, {1,0} };
		cout << differenceOfSum(nums) << '\n';
		nums = { 1,2,3,4 };
		cout << differenceOfSum(nums) << '\n';

		return 0;
	}
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
