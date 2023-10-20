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

//int valueOfStr(string s)
//{
//	int sum = 0;
//	reverse(s.begin(), s.end());
//	for (int i = s.length() - 1; i >= 0; i--)
//		sum += (s[i] - 97) * pow(10, i);
//
//	return sum;
//}
int valueOfStr(string s)
{
	int num = 0;
	for (auto ch : s)
		num = num * 10 + (ch - 'a');

	return num;
}
bool isSumEqual(string firstWord, string secondWord, string targetWord) {
	return (valueOfStr(firstWord) + valueOfStr(secondWord) == valueOfStr(targetWord));
}

int main()
{
	cout << boolalpha;
	cout << isSumEqual("acb", "cba", "cdb") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
