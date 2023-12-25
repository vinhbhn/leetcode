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

// 3ms 7.1MB O(n) O(n)
string greatestLetter(string s) {
	// 2 vectors to store upper and lower letters
	vector<bool> u(26, false), l(26, false);
	for (auto ch : s)
	{
		if (isupper(ch))
			u[ch - 'A'] = true;
		else if (islower(ch))
			l[ch - 'a'] = true;
	}

	// traverse z to a to find greatest english letter
	for (int i = u.size() - 1; i >= 0; i--)
	{
		if (u[i] && l[i])
			return string(1, i + 'A');
	}

	return "";
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
