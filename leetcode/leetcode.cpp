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
// tested, worked
string toLowerCase(string s) {
	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i]))
			s[i] += 32;
	}

	return s;
}
// https://leetcode.com/problems/to-lower-case/solutions/3373745/c-beats-100-time-using-transform/
// using stl
string toLowerCase(string s) {
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	return s;
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
