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

// 3ms 6.7MB
bool checkNoZeroInt(int val)
{
	string num = to_string(val);
	return (find(num.begin(), num.end(), '0') == num.end()) ? true : false;
}
vector<int> getNoZeroIntegers(int n) {
	for (int a = 1; a < n; a++)
	{
		int b = n - a;
		if (checkNoZeroInt(a) && checkNoZeroInt(b))
			return { a, b };
	}

	return {};
}

int main()
{
	cout << boolalpha;
	cout << canConstruct("aa", "aab") << '\n';
	cout << canConstruct("a", "b") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
