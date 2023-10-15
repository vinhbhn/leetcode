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

//int fib(int n) {
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//
//	return fib(n - 1) + fib(n - 2);
//}
int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	int i = 2, prev = 0, curr = 1, temp = 0;
	while (i <= n)
	{
		temp = prev + curr;
		prev = curr;
		curr = temp;

		i++;
	}

	return curr;
}


int main()
{
	std::cout << fib(2) << '\n';
	std::cout << fib(3) << '\n';
	std::cout << fib(4) << '\n';
	std::cout << fib(5) << '\n';
	std::cout << fib(6) << '\n';
	std::cout << fib(7) << '\n';
	std::cout << fib(30) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
