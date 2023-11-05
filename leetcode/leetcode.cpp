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

// 0ms 6.5MB
bool checkString(string s) {
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == 'b' && s[i + 1] == 'a')
			return false;
	}

	return true;
}

int main() {
	cout << sortSentence("is2 sentence4 This1 a3") << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
