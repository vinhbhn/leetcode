#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// because it's already sort 
// index :space between number duplicate
// after all: then add 1 to index because func return number (not duplicate), not space
//int removeDuplicates(std::vector<int>& nums) {
//	int k{ 0 };
//	for (int i{ 0 }; i < nums.size() - 1 ; ++i)
//	{
//		if (nums[i] != nums[i + 1])
//		{
//			++k;
//		}
//	}
// 
// 	for (auto num : nums)
//		std::cout << num << ' ';
//	std::cout << '\n';
//
//	return ++k;
//}

// find min, max -> vector<int> [min, max]
// k = max - min + 1
//int removeDuplicates(std::vector<int>& nums) {
//	auto [min, max] = std::minmax_element(std::begin(nums), std::end(nums));
//	int value{ *min };
//
//	for (int i{ 0 }; i <= nums.size(); ++i)
//	{
//		nums[i] = value++;
//		if (value > *max)
//			break;
//	}
//
//	for (auto num : nums)
//		std::cout << num << ' ';
//	std::cout << '\n';
//
//	return (*max - *min + 1);
//}

//int removeDuplicates(std::vector<int>& nums) {
//	int k{ 0 };
//	for (std::vector<int>::iterator it = nums.begin(); it != nums.end();)
//	{
//		if (*it == *(it + 1) && (it+1) != nums.end())
//		{
//			it = nums.erase(it);
//		}
//		else
//			++k;
//	}
//
//	for (auto num : nums)
//		std::cout << num << ' ';
//	std::cout << '\n';
//
//	return ++k;
//}

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/solutions/3676877/best-method-100-c-java-python-beginner-friendly/
int removeDuplicates(std::vector<int>& nums) {
	int index{ 1 };
	for (int i{ 1 }; i < nums.size(); ++i)
	{
		if (nums[i] != nums[i - 1])
		{
			nums[index] = nums[i];
			++index;
		}
	}

	return index;

}


int main()
{
	std::vector<int> nums1{ 0,0,1,1,1,2,2,3,3,4 };
	std::cout << removeDuplicates(nums1) << '\n';
	std::vector<int> nums2{ 1,1,2 };
	std::cout << removeDuplicates(nums2) << '\n';
	std::vector<int> nums3{ 0, 0, 0, 0, 3 };
	std::cout << removeDuplicates(nums3) << '\n';


	return 0;
}

