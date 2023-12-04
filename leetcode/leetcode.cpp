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

// 33ms 15.5MB O(n) O(n)
bool isOdd(char ch)
{
	switch (ch)
	{
	case '1':
	case '3':
	case '5':
	case '7':
	case '9':
		return true;
		break;
	}

	return false;
}
string largestOddNumber(string num) {
	string res = "";
	for (int i = num.size() - 1; i >= 0; i--)
	{
		if (isOdd(num[i]))
		{
			res = num.substr(0, i + 1);
			break;
		}
	}

	return res;
}

// 16ms 15.5MB
string largestOddNumber(string num) {
	string res = "";
	for (int i = num.size() - 1; i >= 0; i--)
	{
		if (num[i] % 2 != 0) // char % 2
		{
			res = num.substr(0, i + 1);
			break;
		}
	}

	return res;
}


int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
