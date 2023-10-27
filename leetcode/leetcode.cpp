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

int numberOfMatches(int n) {
	int matches = 0;
	// be careful with n == 1
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			matches += n / 2;
			n /= 2;
		}
		else
		{
			matches += (n - 1) / 2;
			n = (n - 1) / 2 + 1;
		}
	}

	return matches;
}

int main()
{
	cout << boolalpha;
	cout << numberOfMatches(7) << '\n';
	cout << numberOfMatches(14) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
