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

// two pointers O(n) 
bool isSubsequence(std::string s, std::string t) {
	int i = 0, j = 0;
	while (j < t.length())
	{
		if (s[i] == t[j])
		{
			i++;
		}
		j++;
	}

	return (i == s.length());
}

// https://leetcode.com/problems/is-subsequence/solutions/1811177/c-recursion-and-two-pointer/
// recursion right to left (slow)
int isSub(std::string& s1, std::string s2, int i, int j)
{
	if (i == 0 || j == 0)
		return 0;

	if (s1[i - 1] == s2[j - 1])
		return 1 + isSub(s1, s2, i - 1, j - 1);
	else
		return isSub(s1, s2, i, j - 1);
}
bool isSubsequence(std::string s, std::string t) {
	int m = s.size();
	int n = t.size();
	if (m > n)
		return false;

	return (isSub(s, t, m, n) == m);
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << isSubsequence("abc", "ahbgdc") << '\n';
	std::cout << isSubsequence("axc", "ahbgdc") << '\n';



	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
