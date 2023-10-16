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

int alternateDigitSum(int n) {
	int sum = 0;
	std::vector<int> v;
	while (n)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	std::reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		sum += (i & 1) ? -v[i] : v[i];

	return sum;
}


int main()
{
	std::cout << alternateDigitSum(521) << '\n';
	std::cout << alternateDigitSum(111) << '\n';
	std::cout << alternateDigitSum(886996) << '\n';
	std::cout << alternateDigitSum(10) << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
