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

// pass 24/38
//string reverseParentheses(string s) {
//	string t = "()";
//	while (s.find(t) != string::npos)
//	{
//		s.erase(s.find(t), t.size());
//	}
//
//	while (s.find('(') != string::npos)
//	{
//		int i = s.find('('), j = s.find_last_of(')');
//		cout << s << '\n';
//
//		// eg: (x) -> x
//		if (s[i + 2] == ')')
//		{
//			// delete ')' first then come '('
//			if ((i + 2) < s.size())
//			{
//				s.erase(s.begin() + i + 2);
//				s.erase(s.begin() + i);
//			}
//		}
//		else
//		{
//			if (i > j)
//				swap(i, j);
//
//			reverse(s.begin() + i + 1, s.begin() + j);
//
//			// delete ')' first then come '('
//			s.erase(s.begin() + j);
//			s.erase(s.begin() + i);
//		}
//	}
//
//	return s;
//}

// 0ms 8MB
string reverseParentheses(string s) {
	stack<int> ind;
	vector<char> res;

	for (char ch : s)
	{
		if (ch == '(')
		{
			ind.push(res.size());
		}
		else if (ch == ')')
		{
			int start_ind = ind.top();
			ind.pop();
			reverse(res.begin() + start_ind, res.end());
		}
		else
		{
			res.push_back(ch);
		}
	}

	return string(res.begin(), res.end());
}

// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/solutions/5458638/explanations-no-one-will-give-you-2-detailed-approaches-extremely-simple-and-effective/?envType=daily-question&envId=2024-07-11
// O(n^2) O(n) 3ms 8MB
//string reverseParentheses(string s) {
//	deque<int> ind_stack;
//	vector<char> res;
//
//	for (char ch : s)
//	{
//		if (ch == '(')
//		{
//			ind_stack.push_back(res.size());
//		}
//		else if (ch == ')')
//		{
//			int start_ind = ind_stack.back();
//			ind_stack.pop_back();
//			reverse(res.begin() + start_ind, res.end());
//		}
//		else
//		{
//			res.push_back(ch);
//		}
//	}
//
//	return string(res.begin(), res.end());
//}


int main() {
	cout << boolalpha;

	cout << reverseParentheses("(abcd)") << '\n';
	cout << reverseParentheses("(u(love)i)") << '\n';
	cout << reverseParentheses("(ed(et(oc))el)") << '\n';

	cout << reverseParentheses("ta()usw((((a))))") << '\n';
	cout << reverseParentheses("sxmdll(q)eki(x)") << '\n';





	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
