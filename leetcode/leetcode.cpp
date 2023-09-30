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

bool checkIfExist(std::vector<int>& arr) {
	for (int i = 0; i < arr.size() - 1; i++)
	{
		for (int j = i + 1; j < arr.size(); j++)
			if (arr[i] == (arr[j] * 2) || (arr[i] * 2) == arr[j])
				return true;
	}

	return false;
}

int main()
{
	std::cout << std::boolalpha;

	std::vector nums = { 10,2,5,3 };
	std::cout << checkIfExist(nums) << '\n';

	nums = { 3,1,7,11 };
	std::cout << checkIfExist(nums) << '\n';

	nums = { 7, 1, 14, 11 };
	std::cout << checkIfExist(nums) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
