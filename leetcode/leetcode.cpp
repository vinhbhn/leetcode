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

int distinctIntegers(int n) {
	// for n > 2, n % (n - 1) == 1 thus n-1 will be added on the board the next day.
	return (n == 1) ? 1 : n - 1;
}

int main()
{
	cout << boolalpha;
	cout << titleToNumber("A") << '\n';
	cout << titleToNumber("AB") << '\n';
	cout << titleToNumber("ZY") << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
