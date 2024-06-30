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

int absASCII(char a, char b)
{
	return abs(a - b);
}

int scoreOfString(string s) {
	int res = 0;
	
	for (int i = 0; i < s.size() - 1; i++)
	{
		res += absASCII(s[i], s[i + 1]);
	}

	return res;
}


int main() {
	cout << boolalpha;

	cout << scoreOfString("hello") << '\n';
	cout << scoreOfString("zaz") << '\n';


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
