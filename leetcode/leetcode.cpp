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

// O(n) 2ms 7.8MB
string removeOuterParentheses(string s) {
	string res = "";

	// count (: c1
	// count ): c2
	int c1 = 0, c2 = 0;

	for (auto ch : s)
	{
		if (ch == '(')
		{
			c1++;
			// outer appear
			if (c1 > c2 + 1)
			{
				res += "(";
			}
		}

		if (ch == ')')
		{
			c2++;
			// c1 == c2: outer remove
			if (c1 > c2)
			{
				res += ")";
				c2--;
				c1--;
			} 
		}
	}

	return res;
}


int main() {
	cout << boolalpha;

	cout << removeOuterParentheses("(()())(())") << '\n';
	cout << removeOuterParentheses("(()())(())(()(()))") << '\n';
	cout << removeOuterParentheses("()()") << '\n';


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
