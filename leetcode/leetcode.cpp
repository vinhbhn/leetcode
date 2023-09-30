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

int largestInteger(int num) {
	std::vector<int> v;
	int num1 = num;
	while (num1)
	{
		v.push_back(num1 % 10);
		num1 /= 10;
	}

	if (v.size() < 3)
		return num;

	std::reverse(v.begin(), v.end());

	std::vector<int> even, odd;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
			even.push_back(v[i]);
		else
			odd.push_back(v[i]);
	}

	std::sort(even.begin(), even.end(), std::greater<int>());
	std::sort(odd.begin(), odd.end(), std::greater<int>());

	int result = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
		{
			result = result * 10 + even[0];
			even.erase(even.begin());
		}
		else
		{
			result = result * 10 + odd[0];
			odd.erase(odd.begin());
		}
	}

	return result;
}

int main()
{
	std::cout << largestInteger(1234) << '\n';
	std::cout << largestInteger(65875) << '\n';
	std::cout << largestInteger(27) << '\n';
	std::cout << largestInteger(247) << '\n';




	/*std::vector<int>  nums = { 1,2,2,3 };
	std::cout << std::boolalpha;
	std::cout << isMonotonic(nums) << '\n';

	nums = { 6,5,4,4 };
	std::cout << isMonotonic(nums) << '\n';

	nums = { 1,3,2 };
	std::cout << isMonotonic(nums) << '\n';*/

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
