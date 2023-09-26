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

//std::string addBinary(std::string a, std::string b) {
//	bool carry{ false };
//
//	if (a.size() < b.size())
//		std::swap(a, b);
//
//	while (b.size() < a.size())
//		b = '0' + b;
//
//	std::string ans = a;
//	for (int i = ans.size() - 1 ; i >= 0; i--)
//	{
//		if (a[i] == '1')
//		{
//			if (b[i] == '1')
//			{
//				if (carry)
//				{
//					//ans[i] = '1'; = a[i]
//					// carry still true
//					continue;
//				}
//
//				ans[i] = '0';
//				carry = true;
//			}
//			else // b[i] = 0
//			{
//				if (carry)
//				{
//					ans[i] = '0';
//					continue;
//				}
//
//				//ans[i] = a[i];
//			}
//		}
//
//		// a[i] = '0'
//		if (b[i] == '1')
//		{
//			if (carry)
//			{
//				//ans[i] = '0'; = a[i]
//				// carry still true
//				continue;
//			}
//
//			ans[i] = b[i];
//		}
//		else // b[i] = 0
//		{
//			if (carry)
//			{
//				ans[i] = '1';
//				carry = false;
//				continue;
//			}
//
//			//ans[i] = a[i]; // because init ans = a
//		}
//	}
//
//	if (carry)
//		ans = '1' + ans;
//
//	return ans;
//}

// https://leetcode.com/problems/add-binary/solutions/3183205/1ms-beats-100-full-explanation-append-reverse-c-java-python3/
std::string addBinary(std::string a, std::string b) {
	std::string ans = "";
	int carry = 0, i = a.length() - 1, j = b.length() - 1;

	while (i >= 0 || j >= 0 || carry)
	{
		if (i >= 0)
			carry += a[i--] - '0';
		if (j >= 0)
			carry += b[j--] - '0';

		ans += carry % 2 + '0';
		carry /= 2;
	}

	std::reverse(ans.begin(), ans.end());
	return ans;
}

int main()
{
	std::vector nums = { 1,3,4,2,2 };
	std::cout << findDuplicate(nums) << '\n';

	nums = { 3,1,3,4,2 };
	std::cout << findDuplicate(nums) << '\n';

	nums = { 2, 2, 2, 2, 2 };
	std::cout << findDuplicate(nums) << '\n';

	return 0;
}

