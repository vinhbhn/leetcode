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

//int minMaxDifference(int num) {
//	vector<int> v;
//	int number = num;
//	while (number)
//	{
//		v.push_back(number % 10);
//		number /= 10;
//	}
//	reverse(v.begin(), v.end());
//
//	int chooseDigit = v[0];
//
//
//}

// 2ms 6.4MB
int minMaxDifference(int num) {
	string number = to_string(num);
	char cDH = ' ', cDL = ' ';
	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] != '9' && cDL == ' ')
			cDL = number[i];

		if (number[i] != '0' && cDH == ' ')
			cDH = number[i];
	}

	string max = number, min = number;
	replace(max.begin(), max.end(), cDL, '9');
	replace(min.begin(), min.end(), cDH, '0');
	return stoi(max) - stoi(min);
}

int main()
{
	cout << boolalpha;
	cout << canConstruct("aa", "aab") << '\n';
	cout << canConstruct("a", "b") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
