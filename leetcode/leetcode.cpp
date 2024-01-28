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

// 139ms 10MB
int countSymmetricIntegers(int low, int high) {
	int count = 0;

	for (int num = low; num <= high; num++)
	{
		string numStr = to_string(num);

		if (numStr.length() % 2 == 0)
		{
			int n = numStr.length();
			string left = numStr.substr(0, n / 2);
			string right = numStr.substr(n / 2, n);

			int l = stoi(left), r = stoi(right);

			int checkL = 0, checkR = 0;

			while (l)
			{
				checkL += l % 10;
				l /= 10;
			}

			while (r)
			{
				checkR += r % 10;
				r /= 10;
			}

			count += (checkL == checkR);
		}
	}

	return count;
}


// 104ms 10.2MB
int sumDigit(string s)
{
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		int number = s[i] + '0';
		sum += number;
	}

	return sum;
}
int countSymmetricIntegers(int low, int high) {
	int count = 0;

	for (int num = low; num <= high; num++)
	{
		string numStr = to_string(num);

		if (numStr.length() % 2 == 0)
		{
			int n = numStr.length();
			string left = numStr.substr(0, n / 2);
			string right = numStr.substr(n / 2, n);

			count += (sumDigit(left) == sumDigit(right));
		}
	}

	return count;
}

// 75ms 9.7MB
int sumDigit(string& s)
{
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		sum += s[i] + '0';
	}

	return sum;
}
int countSymmetricIntegers(int low, int high) {
	int count = 0;

	for (int num = low; num <= high; num++)
	{
		string numStr = to_string(num);

		if (numStr.length() % 2 == 0)
		{
			int n = numStr.length();
			string left = numStr.substr(0, n / 2);
			string right = numStr.substr(n / 2, n);

			count += (sumDigit(left) == sumDigit(right));
		}
	}

	return count;
}

// web 10ms real 8ms 8.1MB
bool isSymetricIntegers(int num)
{
	if (num >= 10 and num <= 99)
		return (num / 10 == num % 10);
	else if (num >= 1000 and num <= 9999)
	{
		const int left = num / 100;
		const int right = num % 100;
		return (left / 10 + left % 10 == right / 10 + right % 10);
	}

	return false;
}
int countSymmetricIntegers(int low, int high) {
	int count = 0;

	for (int num = low; num <= high; num++)
	{
		if (isSymetricIntegers(num))
			count++;
	}

	return count;
}

int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
