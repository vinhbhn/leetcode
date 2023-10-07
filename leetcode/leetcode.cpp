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

// O(n) O(n)
std::string removeDuplicates(std::string s) {
	std::stack<char> st;
	std::string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (st.empty())
			st.push(s[i]);
		else
		{
			if (st.top() == s[i])
				st.pop();
			else
				st.push(s[i]);
		}
	}

	while (!st.empty())
	{
		str += st.top();
		st.pop();
	}
	std::reverse(str.begin(), str.end());
	return str;
}

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/solutions/3655668/simple-c-approach-using-basic-strings-no-stack-with-detailed-explanation/
// with no use stack
//std::string removeDuplicates(std::string s) {
//	std::string temp = "";
//	int i = 0;
//	while (i < s.length())
//	{
//		if (temp.empty() || s[i] != temp.back())
//			temp.push_back(s[i]);
//		else
//			temp.pop_back();
//
//		i++;
//	}
//
//	return temp;
//}

int main()
{
	std::cout << removeDuplicates("abbaca") << '\n';
	std::cout << removeDuplicates("azxxzy") << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
