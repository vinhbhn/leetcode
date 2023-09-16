#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

// 78/95 testcases
//bool isValid(std::string s) {
//	int size{ static_cast<int>(s.size()) };
//	bool correct{ false };
//	
//	if (size == 1 || size % 2 != 0)
//		return false;
//
//	// squentially
//	for (int i{ 0 }; i < size - 1; i += 2)
//	{
//		if ((s[i] == '(' && s[i + 1] == ')') || (s[i] == '{' && s[i + 1] == '}') || (s[i] == '[' && s[i + 1] == ']'))
//			correct = true;
//		else
//		{
//			// guard, maybe true true false
//			correct = false;
//			break;
//		}
//	}
//
//	// mirror, center position
//	if (size >= 4 && correct == false)
//	{
//		for (int i{ 0 }, j{ size - 1 }; i <= ((size - 1) / 2); ++i, --j)
//		{
//			if ((s[i] == '(' && s[j] == ')') || (s[i] == '{' && s[j] == '}') || (s[i] == '[' && s[j] == ']'))
//				correct = true;
//			else
//			{
//				correct = false;
//				break;
//			}
//		}
//	}
//	
//	return correct;
//}

// https://leetcode.com/problems/valid-parentheses/solutions/3399077/easy-solutions-in-java-python-and-c-look-at-once-with-exaplanation/
bool isValid(std::string s)
{
	std::stack<char> st; // create an empty stack to store opening brackets
	for (char c : s) // loop through each character in the string
	{
		if (c == '(' || c == '{' || c == '[') // if the character is an opening bracket
			st.push(c);
		else // if the character is a closing bracket
		{
			if (st.empty() // if the stack is empty or
				|| c == ')' && st.top() != '(' // the closing bracket doesn't match the corresponding opening bracket at the top of the stack
				|| c == '}' && st.top() != '{'
				|| c == ']' && st.top() != '['
				) {
				return false; // the string is not valid, so return false
			}

			st.pop(); // otherwise, pop the opening bracket from the stack
		}
	}
	
	return st.empty();
	// if the stack is empty, all opening brackets have been matched with their corresponding closing brackets,
	// so the string is valid, otherwise, there are unmatched opening brackets, so return false.
}

int main()
{
	std::cout << std::boolalpha;
	std::cout << isValid("()") << '\n';
	std::cout << isValid("()[]{}") << '\n';
	std::cout << isValid("(]") << '\n';
	std::cout << isValid("(]}") << '\n';
	std::cout << isValid("(") << '\n';
	std::cout << isValid(")") << '\n';
	std::cout << isValid("{[]}") << '\n';
	std::cout << isValid("({[]})") << '\n';
	std::cout << isValid("[{[]]}") << '\n';
	std::cout << isValid("(){}}{") << '\n';
	std::cout << isValid("(([]){})") << '\n';

	return 0;
}

