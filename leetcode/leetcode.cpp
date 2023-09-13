#include <iostream>
#include <vector>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::vector<int> output;

		for (int i{ 0 }; i < nums.size() - 1; ++i) {
			for (int j{ i + 1 }; j < nums.size(); ++j) {
				if (nums[i] + nums[j] == target)
				{
					output.push_back(i);
					output.push_back(j);
				}

			}
		}

		return output;
	}

	friend std::ostream& operator<<(std::ostream& out, const Solution& s)
	{
		return out << s;
	}
};


int main()
{
	std::vector<int> test{ 3,3 };
	std::cout << Solution::twoSum(test, 6) << '\n';
}

