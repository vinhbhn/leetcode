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

// 2ms 6.3MB
//int maximum69Number(int num) {
//	string s = to_string(num);
//	cout << s << '\n';
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '6')
//		{
//			s[i] = '9';
//			break;
//		}
//	}
//
//	return stoi(s);
//}

// https://leetcode.com/problems/maximum-69-number/solutions/2786958/without-string-conversion-written-explanation-easy-to-understand/
// 0ms 6.6MB
int maximum69Number(int num) {
	// first encountered '6' from left = last encountered '6' from right

	int rightDigCount = -1; // number of digits to right of last encountered '6'
	int digCount = 0; // number of digits to right of any dig at some instance
	int temp = num;

	while (temp > 0)
	{
		int dig = temp % 10;
		if (dig == 6)
			rightDigCount = digCount; // record the rightDigCount when a '6' is encountered

		digCount++;
		temp /= 10;
	}

	if (rightDigCount == -1) return num;
	return num + (3 * pow(10, rightDigCount));
}

int main()
{
	cout << boolalpha;
	cout << maximum69Number(9669) << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
