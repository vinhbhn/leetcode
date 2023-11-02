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

// 33ms 12.6MB
int sumFourDivisors(vector<int>& nums) {
	int res = 0;
	for (auto& num : nums)
	{
		int sum = 0, count = 0;
		for (int i = 1; i * i <= num; i++)
		{
			if (num % i == 0)
			{
				if (num / i == i)
				{
					sum += i;
					count++;
				}
				else {
					sum += i + (num / i);
					count += 2;
				}

			}
		}

		if (count == 4)
			res += sum;
	}

	return res;
}

// pass 84/85 cases, miss case: num / i == i 
int sumFourDivisors(vector<int>& nums) {
	int res = 0;
	for (auto& num : nums)
	{
		int sum = 0, countF = 0;
		for (int i = 2; i * i <= num; i++)
		{
			if (num % i == 0)
			{
				sum += i + (num / i);
				countF += 2;
			}
		}

		if (countF == 2)
			res += sum + 1 + num;
	}

	return res;
}

// https://leetcode.com/problems/four-divisors/solutions/547252/c-java-easy-check/
// 16ms 12.6MB
int sumFourDivisors(vector<int>& nums) {
	int sum = 0;
	for (auto num : nums)
	{
		int last_d = 0;
		for (int d = 2; d * d <= num; d++)
		{
			if (num % d == 0)
				if (last_d == 0)
					last_d = d;
				else
				{
					last_d = 0;
					break;
				}
		}

		if (last_d > 0 && last_d != num / last_d)
			sum += 1 + num + last_d + num / last_d;
	}

	return sum;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
