#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int removeElement(std::vector<int>& nums, int val) {
	int numsOfVal{};

	// https://en.cppreference.com/w/cpp/container/vector/erase
	for (std::vector<int>::iterator it = nums.begin(); it != nums.end();)
	{
		if (*it == val)
		{
			++numsOfVal;
			it = nums.erase(it);
		}
		else
			++it;
	}

	for (int i{ 0 }; i < numsOfVal; ++i)
		nums.push_back(val);

	return (nums.size() - numsOfVal);
}

// https://leetcode.com/problems/remove-element/solutions/3670940/best-100-c-java-python-beginner-friendly/
//int removeElement(std::vector<int>& nums, int val) {
//	int index{ 0 };
//	for (int i{ 0 }; i < nums.size(); ++i)
//	{
//		if (nums[i] != val)
//		{
//			nums[index] = nums[i];
//			++index;
//		}
//	}
//	return index;
//}


int main()
{
	std::vector<int> nums1{ 0,1,2,2,3,0,4,2 };
	std::cout << removeElement(nums1, 2) << '\n';
	std::vector<int> nums2{ 2,2,3,3 };
	std::cout << removeElement(nums2, 3) << '\n';

	return 0;
}

