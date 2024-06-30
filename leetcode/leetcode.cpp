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

int sumOfTheDigitsOfHarshadNumber(int x) {
	int sum = 0, num = x;

	while (num)
	{
		sum += num % 10;
		num /= 10;
	}

	if (x % sum == 0)
		return sum;

	return -1;
}

int main() {
	cout << boolalpha;
	
	cout << sumOfTheDigitsOfHarshadNumber(18) << '\n';
	cout << sumOfTheDigitsOfHarshadNumber(23) << '\n';


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
