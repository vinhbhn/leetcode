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

// 0ms 6.6MB
string replaceDigits(string s) {
	for (int i = 1; i < s.size(); i += 2)
	{
		s[i] = s[i - 1] + (s[i] - '0'); 
	}

	return s;
}

int main() {
	cout << boolalpha;
	cout << replaceDigits("a1c1e1") << '\n';

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
