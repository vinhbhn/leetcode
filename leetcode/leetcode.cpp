#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

bool isPalindrome(std::string s) {
	// filter uppercase/lowercase letters, convert uppercase to lowercase
	std::string output;
	for (int i{ 0 }; i < s.size(); ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			output += s[i] + 32;
		}

		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
			output += s[i];
	}

	if (output.empty())
		return true;

	std::string str = output;
	std::reverse(output.begin(), output.end());
	return str == output;
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << isPalindrome("A man, a plan, a canal: Panama") << '\n';
	std::cout << isPalindrome("race a car") << '\n';
	std::cout << isPalindrome(" ") << '\n';
	std::cout << isPalindrome("0P") << '\n';

	return 0;
}

