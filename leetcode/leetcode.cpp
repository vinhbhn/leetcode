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

// worked
//bool rotateString(string s, string goal) {
//	int count = 0;
//	while (count < goal.size())
//	{
//		s.push_back(s[0]);
//		s.erase(s.begin());
//
//		if (s == goal)
//			return true;
//
//		count++;
//	}
//
//	return (s == goal);
//}

//https://leetcode.com/problems/rotate-string/solutions/3199751/best-c-2-solution-string-matching-string-one-stop-solution/
// using strings with extra space O(n^2) O(n) because s+s
//bool rotateString(string s, string goal) {
//	if (s.size() != goal.size())
//		return false;
//
//	string check = s + s;
//	return check.find(goal) != string::npos;
//}
// using strings without extra space O(n^2) O(1)
bool rotateString(string a, string b, int rotation)
{
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] != b[(i + rotation) % b.length()])
			return false;
	}

	return true;
}
bool rotateString(string s, string goal) {
	if (s.size() != goal.size())
		return false;

	if (s.length() == 0)
		return true;

	for (int i = 0; i < s.length(); i++)
		if (rotateString(s, goal, i))
			return true;

	return false;
}


int main()
{
	cout << boolalpha;
	cout << rotateString("abcde", "cdeab") << '\n';
	cout << rotateString("abcde", "abced") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
