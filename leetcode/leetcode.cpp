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

// 2ms 6.2MB
bool squareIsWhite(string coordinates) {
	int x = coordinates[0] - 'a', y = coordinates[1] - '1';

	if (x % 2 == 0)
	{
		return (y % 2 != 0); // x and y is even mean it is black (false), eg: a1
	}
	else
	{
		return (y % 2 == 0);
	}

	return 0;
}

// web 0ms real 2ms 6.4MB
bool squareIsWhite(string coordinates) {
	return ((coordinates[0] + coordinates[1]) % 2 != 0); // ascii: even decial is false
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
