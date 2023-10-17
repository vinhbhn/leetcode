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
#include <numeric>
#include <sstream>
#include <queue>
#include<map>
#include <charconv>

//std::string reverseOnlyLetters(std::string s) {
//	int i = 0, j = s.length() - 1;
//	while (i < j)
//	{
//		if (isalpha(s[i]) && isalpha(s[j]))
//			std::swap(s[i++], s[j--]);
//		else if (!isalpha(s[i]))
//			i++;
//		else
//			j--;
//	}
//
//	return s;
//}

//https://leetcode.com/problems/reverse-only-letters/solutions/842716/3-approaches-faster-than-100-easy-understanding-c/
//std::string reverseOnlyLetters(std::string s) {
//	std::stack<char> letters;
//	for (char c : s)
//		if (isalpha(c))
//			letters.push(c);
//
//	std::string result;
//	for (char c : s)
//	{
//		if (isalpha(c))
//		{
//			result += letters.top();
//			letters.pop();
//		}
//		else
//			result += c;
//	}
//	return result;
//}
std::string reverseOnlyLetters(std::string s) {
	std::vector<char> res;
	std::map<int, char> m;

	for (int i = 0; i < s.size(); i++)
	{
		if (!isalpha(s[i]))
			m[i] = s[i];
		else
			res.push_back(s[i]);
	}
	std::reverse(res.begin(), res.end());
	for (auto& i : m)
		res.insert(res.begin() + i.first, i.second);
	std::string result(res.begin(), res.end());
	return result;
}


int main()
{
	std::cout << reverseOnlyLetters("ab-cd") << '\n';
	std::cout << reverseOnlyLetters("a-bC-dEf-ghIj") << '\n';
	std::cout << reverseOnlyLetters("Test1ng-Leet=code-Q!") << '\n';
	std::cout << reverseOnlyLetters("7_28]") << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
