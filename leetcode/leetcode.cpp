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

using namespace std;

// tested
//bool backspaceCompare(string s, string t) {
//	stack<char> st1, st2;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '#')
//		{
//			if (!st1.empty())
//				st1.pop();
//			// if st.empty() then ignore '#'
//		}
//		else
//			st1.push(s[i]);
//	}
//	for (int i = 0; i < t.length(); i++)
//	{
//		if (t[i] == '#')
//		{
//			if (!st2.empty())
//				st2.pop();
//		}
//		else
//			st2.push(t[i]);
//	}
//	string a = "", b = "";
//	while (!st1.empty())
//	{
//		a += st1.top();
//		st1.pop();
//	}
//	while (!st2.empty())
//	{
//		b += st2.top();
//		st2.pop();
//	}
//	return (a == b);
//}

bool backspaceCompare(string s, string t) {
	string s1, t1;
	for (char c : s)
	{
		if (c == '#' && !s1.empty())
			s1.pop_back();
		else if (c != '#')
			s1 += c;
	}
	for (char c : t)
	{
		if (c == '#' && !t1.empty())
			t1.pop_back();
		else if (c != '#')
			t1 += c;
	}

	return (s1 == t1);
}

int main()
{
	cout << boolalpha;
	cout << backspaceCompare("ab#c", "ad#c") << '\n';
	cout << backspaceCompare("ab##", "c#d#") << '\n';
	cout << backspaceCompare("a#c", "b") << '\n';
	cout << backspaceCompare("a##c", "#a#c") << '\n';
	cout << backspaceCompare("y#fo##f", "y#f#o##f") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
