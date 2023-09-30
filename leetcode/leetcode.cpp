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

// https://leetcode.com/problems/132-pattern/solutions/4107421/99-35-stack-left-approach-binary-search/?envType=daily-question&envId=2023-09-30
// stack-based O(n) O(n)
bool find132pattern(std::vector<int>& nums) {
	std::stack<int> s;
	int third = INT_MIN;

	for (int i = nums.size() - 1; i >= 0; i--)
	{
		if (nums[i] < third)
			return true;

		while (!s.empty() && s.top() < nums[i])
		{
			third = s.top();
			s.pop();
		}
		s.push(nums[i]);
	}
	return false;
}


int main()
{
	std::cout << std::boolalpha;
	std::vector nums = { 1,2,3,4 };
	std::cout << find132pattern(nums) << '\n';

	nums = { 3,1,4,2 };
	std::cout << find132pattern(nums) << '\n';

	nums = { -1,3,2,0 };
	std::cout << find132pattern(nums) << '\n';

	nums = { 3,5,0,3,4 };
	std::cout << find132pattern(nums) << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
