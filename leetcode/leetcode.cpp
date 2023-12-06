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

// 4ms 8.2MB
string reformat(string s) {
	string al = "", digit = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))
			digit += s[i];
		else
			al += s[i];
	}

	int l = al.length();
	int d = digit.length();
	if (abs(l - d) > 1)
	{
		return "";
	}

	int i = 0;
	string res = "";
	while (i < l && i < d)
	{
		if (l < d)
		{
			res += digit[i];
			res += al[i];
		}
		else
		{
			res += al[i];
			res += digit[i];
		}

		i++;
	}
	// last char
	if (i < l)
		res += al[i];
	if (i < d)
		res += digit[i];

	return res;
}


int main() {
	cout << boolalpha;
	cout << reformat("a0b1c2") << '\n';
	cout << reformat("covid2019") << '\n';

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
