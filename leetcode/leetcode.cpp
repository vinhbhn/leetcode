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

// 38ms 15.3MB O(n) O(n/2)
string makeSmallestPalindrome(string s) {
	int n = s.length(), i = 0;

	while (true)
	{
		if (i >= n - 1 - i)
			break;

		if (s[i] > s[n - 1 - i])
			s[i] = s[n - 1 - i];
		else if (s[i] < s[n - 1 - i])
			s[n - 1 - i] = s[i];

		i++;
	}

	return s;
}

// web 19ms real 31ms 15.3MB
string makeSmallestPalindrome(string s) {
	int l = 0, r = s.length() - 1;

	while (l <= r)
	{
		if (s[l] > s[r])
			s[l] = s[r];
		else if (s[l] < s[r])
			s[r] = s[l];
		l++;
		r--;
	}

	return s;
}

int main() {
	cout << boolalpha;
	string s = "egcfe";
	cout << makeSmallestPalindrome(s) << '\n';

	s = "abcd";
	cout << makeSmallestPalindrome(s) << '\n';

	s = "seven";
	cout << makeSmallestPalindrome(s) << '\n';


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
