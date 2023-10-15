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

// O(n^2)
//bool isHappy(int n) {
//	int sum = 0, digit = 0;
//
//	while (n > 9)
//	{
//		while (n)
//		{
//			digit = n % 10;
//			sum += digit * digit;
//
//			n /= 10;
//		}
//
//		n = sum;
//		sum = 0;
//	}
//
//
//	// 7 is happy number
//	return ((n == 1) || (n == 7));
//}

// https://leetcode.com/problems/happy-number/solutions/3236759/best-c-2-solution-floyd-s-cycle-finding-algorithm-hash-table-one-stop-solution/
int nextNumber(int n)
{
	int newNumber = 0;
	while (n)
	{
		int digit = n % 10;
		newNumber += digit * digit;
		n /= 10;
	}
	return newNumber;
}
// math + hash table O(log N) O(log N)
//bool isHappy(int n) {
//	std::unordered_set<int> set;
//	while (n != 1 && !set.count(n))
//	{
//		set.insert(n);
//		n = nextNumber(n);
//	}
//
//	return (n == 1);
//}
// Floyd's cycle finding algorithm O(log N) O(1)
bool isHappy(int n) {
	int slowPointer = n, fastPointer = nextNumber(n);
	while (fastPointer != 1 && fastPointer != slowPointer)
	{
		slowPointer = nextNumber(slowPointer);
		fastPointer = nextNumber(nextNumber(fastPointer));
	}
	
	return fastPointer == 1;
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << isHappy(19) << '\n';
	std::cout << isHappy(2) << '\n';
	std::cout << isHappy(7) << '\n';
	std::cout << isHappy(1111111) << '\n';



	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
