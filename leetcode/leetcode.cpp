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

//std::string reverseWords(std::string s) {
//	std::size_t m_pos = 0;
//	std::vector<std::string> v;
//	std::string result;
//	for (std::size_t i = 0; i < s.size(); i++)
//	{
//		if ((s[i] == ' '))
//		{
//			v.push_back(s.substr(m_pos, i - m_pos));
//			m_pos = i + 1;
//		}
//
//		if (i == s.size() - 1)
//			v.push_back(s.substr(m_pos, i + 1 - m_pos));
//	}
//
//	for (auto& sv : v)
//	{
//		std::reverse(sv.begin(), sv.end());
//		result += sv + ' ';
//	}
//	result.pop_back(); // remove ' ' in the end of string
//
//	return result;
//}

// from web: using two pointers
//std::string reverseWords(std::string s) {
//	std::size_t l = 0, r = 0;
//	while (l < s.length())
//	{
//		while (r < s.length() && s[r] != ' ')
//			r++;
//
//		std::reverse(s.begin() + l, s.begin() + r);
//		l = r + 1;
//		r = l;
//	}
//
//	return s;
//}

// https://leetcode.com/problems/reverse-words-in-a-string-iii/solutions/4111458/91-55-easy-solution-reverse-join/?envType=daily-question&envId=2023-10-01
std::string reverseWords(std::string s) {
	std::stringstream ss(s);
	std::string temp, ans;
	while (ss >> temp)
	{
		std::reverse(temp.begin(), temp.end());
		ans += temp + ' ';
	}

	return ans.substr(0, ans.size() - 1);
}

int main()
{
	std::cout << reverseWords("Let's take LeetCode contest") << '\n';
	std::cout << reverseWords("God Ding") << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
