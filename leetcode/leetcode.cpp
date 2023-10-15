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

//int tribonacci(int n) {
//	if (n == 0) return 0;
//	if (n == 1 || n == 2) return 1;
//
//	int i = 3;
//	//	n0			n1			n2
//	int first = 0, second = 1, third = 1, temp = 0;
//	while (i <= n)
//	{
//		temp = first + second + third;
//		first = second;
//		second = third;
//		third = temp;
//
//		i++;
//	}
//
//	return third;
//}
int tribonacci(int n) {
	std::vector<int> tri(38, 0);
	tri[0] = 0;
	tri[1] = tri[2] = 1;

	for (int i = 3; i <= n; i++)
	{
		tri[i] = tri[i - 1] + tri[i - 2] + tri[i - 3];
	}

	return tri[n];
}


int main()
{
	std::cout << tribonacci(4) << '\n';
	std::cout << tribonacci(25) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
