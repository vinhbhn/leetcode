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

// O(N) 14ms 14.2MB clever string manipulation
//bool repeatedSubstringPattern(string s) {
//	string ss = s + s; 
//	string str = ss.substr(1, ss.size() - 2); // remove first and last character
//
//	// if str contain s meaning s have substring
//	return str.find(s) != string::npos; 
//}

// https://leetcode.com/problems/repeated-substring-pattern/solutions/3938580/99-42-2-approaches-o-n/
// check all possible substring
// O(n^2) O(n) 50ms 94.4MB
bool repeatedSubstringPattern(string s) {
	int n = s.size();

	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			string sub = s.substr(0, i);
			string repeated = "";
			for (int j = 0; j < n / i; j++)
			{
				repeated += sub;
			}

			if (repeated == s)
				return true;
		}
	}
	return false;
}

int main() {
	cout << boolalpha;

	cout << repeatedSubstringPattern("abab") << '\n';
	cout << repeatedSubstringPattern("aba") << '\n';
	cout << repeatedSubstringPattern("abcabcabcabc") << '\n';

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
