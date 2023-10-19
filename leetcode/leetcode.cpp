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

int differenceOfSum(vector<int>& nums) {
	int ele_sum = 0, d_sum = 0;
	for (auto num : nums)
	{
		ele_sum += num;
		while (num)
		{
			d_sum += num % 10;
			num /= 10;
		}
	}

	return abs(ele_sum - d_sum);
}

int main()
{
	vector<int> nums = { 1, 15, 6, 3 };
	cout << differenceOfSum(nums) << '\n';
	nums = { 1,2,3,4 };
	cout << differenceOfSum(nums) << '\n';

	return 0;
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
