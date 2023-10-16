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

//int convertLowerLetterToInt(char ch)
//{
//	switch (ch)
//	{
//		case 'a': return 1;
//		case 'b': return 2;
//		case 'c': return 3;
//		case 'd': return 4;
//		case 'e': return 5;
//		case 'f': return 6;
//		case 'g': return 7;
//		case 'h': return 8;
//		case 'i': return 9;
//		case 'j': return 10;
//		case 'k': return 11;
//		case 'l': return 12;
//		case 'm': return 13;
//		case 'n': return 14;
//		case 'o': return 15;
//		case 'p': return 16;
//		case 'q': return 17;
//		case 'r': return 18;
//		case 's': return 19;
//		case 't': return 20;
//		case 'u': return 21;
//		case 'v': return 22;
//		case 'w': return 23;
//		case 'x': return 24;
//		case 'y': return 25;
//		case 'z': return 26;
//	}
//
//	return 0;
//}
//int convertLowerLetterToInt(char ch)
//{
//	// 97 is 'a', and with 'a' = 1
//	return ch - 96;
//}
int sumOfDigit(int number)
{
	int sum = 0;
	while (number)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
int getLucky(std::string s, int k) {
	int i = 0, result = 0;

	// transform #1
	while (i < s.length())
	{
		// 97 is 'a', and with 'a' = 1
		result += sumOfDigit(s[i++] - 96);
	}

	// Transform #2 to k
	k -= 1;
	while (k--)
		result = sumOfDigit(result);

	return result;
}


int main()
{
	std::cout << getLucky("zbax", 2) << '\n';
	std::cout << getLucky("iiii", 1) << '\n';
	std::cout << getLucky("leetcode", 2) << '\n';

	//std::cout << convertLowerLetterToInt('a') << '\n';
	//std::cout << convertLowerLetterToInt('z') << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
