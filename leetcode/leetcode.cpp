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

int sumOfDigit(int number)
{
	if (number < 10)
		return number;

	int sum = 0;
	while (number)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
int countEven(int num) {
	int count = 0;

	for (int i = 2; i <= num; i++)
	{
		if (sumOfDigit(i) % 2 == 0)
			count++;
	}
	
	return count;
}

//https://leetcode.com/problems/count-integers-with-even-digit-sum/solutions/3176256/easy-c-most-optimal-explanation-100-fast/
//int countEven(int num) {
//	int currSum = 0; // for storing sum of each digit in num
//	int store = num; // storing value of num for further checking
//	while (num)
//	{
//		currSum += num % 10;
//		num /= 10;
//	}
//
//	if (currSum & 1) // i.e sum is odd
//		return (store - 1) / 2;
//	else
//		return store / 2;
//}

int main()
{
	std::cout << countEven(4) << '\n';
	std::cout << countEven(30) << '\n';



	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
