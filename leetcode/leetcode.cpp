#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//bool isPalindrome(int x)
//{
//	// x < 0: not palindrome
//	// x = -121, reverse: x = 121-,then do not need compare
//	if (x < 0)
//		return false;
//
//	if (x == 0)
//		return true;
//
//	// x > 0: convert it to string then reverse, comp
//	std::string xToStr{ std::to_string(x) };
//	std::reverse(xToStr.begin(), xToStr.end());
//
//	return (xToStr == std::to_string(x));
//}

bool isPalindrome(int x)
{
	// x < 0
		// e.g -121, reverse: 121-
	if (x < 0)
		return false;

	// using Modulo
	long long reversed{ 0 };
	int number{ x };
	while (x > 0)
	{
		int digit = x % 10;
		reversed = (reversed * 10) + digit;
		x /= 10;
	}
	return (number == reversed);
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << isPalindrome(121) << '\n';
	std::cout << isPalindrome(122) << '\n';
	std::cout << isPalindrome(-121) << '\n';
	std::cout << isPalindrome(10) << '\n';

	return 0;
}

