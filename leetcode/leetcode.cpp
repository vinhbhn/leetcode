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

//bool checkPerfectNumber(int num) {
//	int sum = 0;
//
//	for (int i = 1; i <= num / 2; i++)
//	{
//		if (num % i == 0)
//			sum += i;
//	}
//
//	return (sum == num);
//}

bool checkPerfectNumber(int num) {
	if (num == 1) return false;

	int sum = 1;
	for (int i = 2; i*i <= num; i++)
		if (num % i == 0)
			// example: 28 = 1 + 2*14 + 4*7
			sum += i + num / i;

	return (sum == num);
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << checkPerfectNumber(28) << '\n';
	std::cout << checkPerfectNumber(7) << '\n';
	std::cout << checkPerfectNumber(1) << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
