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

string convertToBase7(int num) {
	if (num == 0)
		return "0";

	string res = "";

	// save '-' if any
	bool minus = false;
	if (num < 0)
	{
		num = -num;
		minus = true;
	}

	while (num > 0)
	{
		res += to_string(num % 7);
		num /= 7;
	}


	// revert minus if any then reverse
	if (minus)
		res += '-';
	reverse(res.begin(), res.end());

	return res;
}

int main() {
	cout << boolalpha;
	
	cout << convertToBase7(100) << '\n';
	cout << convertToBase7(-7) << '\n';
	cout << convertToBase7(0) << '\n';

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
