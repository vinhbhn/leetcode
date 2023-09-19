#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>

//int searchInsert(std::vector<int>& nums, int target) {
//	if (static_cast<int>(nums.size()) == 1)
//	{
//		if (target > nums[0])
//			return 1;
//		else
//			return 0;
//	}
//
//	int current{}, last{ static_cast<int>(nums.size()) - 1 };
//
//	for (int first{ 0 }; first <= last; )
//	{
//		if (first + 1 == last)
//		{
//			if (target <= nums[first])
//				return first;
//			else if (target > nums[last])
//				return last + 1;
//			else
//				return last;
//
//		}
//
//		int current = (first + last) / 2;
//
//		if (target == nums[current])
//			return current;
//		else if (target > nums[current])
//		{
//			first = current;
//		}
//		else
//		{
//			last = current;
//		}
//	}
//
//	return current;
//}

int searchInsert(std::vector<int>& nums, int target)
{
	int first{ 0 }, last{ static_cast<int>(nums.size()) }, mid{};

	if (target > nums[last - 1])
		return last;

	while (first <= last)
	{
		mid = (first + last) / 2;
		if (target == nums[mid])
			return mid;
		else if (target > nums[mid])
			first = mid + 1;
		else
			last = mid - 1;
	}

	return first;
}

int main()
{
	std::vector<int> s{ 1,3,5,6 };
	int target = 5;
	std::cout << searchInsert(s, target) << '\n';
	target = 2;
	std::cout << searchInsert(s, target) << '\n';
	target = 7;
	std::cout << searchInsert(s, target) << '\n';
	target = 0;
	std::cout << searchInsert(s, target) << '\n';
	s = { 1 };
	std::cout << searchInsert(s, target) << '\n';


	return 0;
}

