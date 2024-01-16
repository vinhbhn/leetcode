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

// 11ms 9.3MB
string removeTrailingZeros(string num) {
	int count = 0;
	for (int i = num.length() - 1; i >= 0; i--)
	{
		if (num[i] == '0')
			count++;
		else
			break;
	}

	return num.substr(0, num.length() - count);
}

// web 0ms real 12ms 9.7MB
string removeTrailingZeros(string num) {
	int j = num.length() - 1;
	while (num[j] == '0')
		j--;

	string res = "";
	for (int i = 0; i <= j; i++)
	{
		res += num[i];
	}
	return res;
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
