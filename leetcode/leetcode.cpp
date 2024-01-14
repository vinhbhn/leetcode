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

// 0ms 7.1MB O(n)
bool isVowel(char ch)
{
	return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U');
}
bool halvesAreAlike(string s) {
	int n = s.length(), half = n / 2, countA = 0, countB = 0;

	for (int i = 0; i < half; i++)
	{
		if (isVowel(s[i]))
			countA++;

		if (isVowel(s[i + half]))
			countB++;
	}

	return (countA == countB);
}

int main() {
	cout << boolalpha;

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
