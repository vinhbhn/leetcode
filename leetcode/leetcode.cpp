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



int main() {
	cout << boolalpha;

	/*cout << reverseParentheses("(abcd)") << '\n';
	cout << reverseParentheses("(u(love)i)") << '\n';
	cout << reverseParentheses("(ed(et(oc))el)") << '\n';*/

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
