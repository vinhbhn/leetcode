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

int differenceOfSums(int n, int m) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % m != 0)
			sum += i;
		else
			sum -= i;
	}

	return sum;
}

int main()
{
	cout << boolalpha;

	cout << sumOfMultiples(7) << '\n';
	cout << sumOfMultiples(10) << '\n';
	cout << sumOfMultiples(9) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
