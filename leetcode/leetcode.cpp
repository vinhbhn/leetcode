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

// 4ms O(n) O(1)
int titleToNumber(string columnTitle) {
	int res = 0;
	for (auto ch : columnTitle)
	{
		// to base 1 index
		int c = ch - 'A' + 1;
		res = res * 26 + c;
	}

	return res;
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
