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

// 44/57 left to right
//char shift(char ch, int num)
//{
//	num %= 26; // if num > 26
//
//	if (ch + num > 'z')
//	{
//		num -= 'z' - ch;
//		num--; // wrap
//		ch = 'a';
//	}
//
//	return (ch + num);
//}
//string shiftingLetters(string s, vector<int>& shifts) {
//	for (int i = 0; i < shifts.size(); i++)
//	{
//		// if shifts[i] > 26
//		shifts[i] %= 26;
//		for (int j = 0; j <= i; j++)
//		{
//			s[j] = shift(s[j], shifts[i]);
//		}
//	}
//
//	return s;
//}

// 101ms 68.3MB
char shift(char ch, int num)
{
	if (ch + num > 'z')
	{
		num -= 'z' - ch;
		num--; // wrap
		ch = 'a';
	}

	return (ch + num);
}
string shiftingLetters(string s, vector<int>& shifts) {
	int sum = 0;
	for (int i = shifts.size() - 1; i >= 0; i--)
	{
		// if sum > 26
		sum += shifts[i];
		sum %= 26;
		s[i] = shift(s[i], sum);
	}

	return s;
}

// web
char shift(char ch, int num)
{
	return (ch - 'a' + num) % 26 + 'a';
}

int main() {
	cout << boolalpha;
	cout << shift('a', 1) << '\n';
	cout << shift('z', 1) << '\n';
	cout << shift('y', 1) << '\n';
	cout << shift('y', 2) << '\n';
	cout << shift('y', 3) << '\n';
	cout << shift('y', 4) << '\n';
	vector<int> shifts = { 3,5,9 };
	cout << shiftingLetters("abc", shifts) << '\n';
	shifts = { 52 };
	cout << shiftingLetters("z", shifts) << '\n';

	cout << shift('z', 52) << '\n'; // curr not work with z because num % 26
	cout << shift('b', 14) << '\n';

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
