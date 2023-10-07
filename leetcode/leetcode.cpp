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

bool isVowel(char& ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
		|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		return true;

	return false;
}
//std::string reverseVowels(std::string s) {
//	std::stack<char> st;  // stack is LIFO means we don't need reverse the vowels
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (isVowel(s[i]))
//			st.push(s[i]);
//	}
//
//	if (st.empty())
//		return s;
//
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (isVowel(s[i]))
//		{
//			s[i] = st.top();
//			st.pop();
//		}
//	}
//
//	return s;
//}

// web: using two pointers O(n) O(1)
std::string reverseVowels(std::string s) {
	int l = 0, r = s.length() - 1;
	while (l < r)
	{
		if (isVowel(s[l]) && isVowel(s[r]))
		{
			std::swap(s[l], s[r]);
			l++;
			r--;
		}
		else if (isVowel(s[l]))
			r--;
		else if (isVowel(s[r]))
			l++;
		else
		{
			l++;
			r--;
		}

	}

	return s;
}



int main()
{
	std::cout << reverseVowels("hello") << '\n';
	std::cout << reverseVowels("leetcode") << '\n';
	std::cout << reverseVowels("aA") << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
