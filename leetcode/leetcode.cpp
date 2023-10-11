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

//https://leetcode.com/problems/add-strings/solutions/2808140/c-grade-1-addition-technique/
std::string addStrings(std::string num1, std::string num2) {
	// accessing last digit of the num1 string and num2 string
	int i = num1.size() - 1, j = num2.size() - 1;

	// declared a integer variable carry and assigned it 0
	int carry = 0;

	// declared an empty string
	std::string ans = "";

	// traversing the num1 and num2 string till the leftmost digit
	// and till carry > 0
	while (i >= 0 || j >= 0 || carry)
	{
		// declared an int var sum and assigned 0 to it
		long sum = 0;

		// convert the char to int and add it to sum variable
		if (i >= 0)
			sum += num1[i--] - '0';
		if (j >= 0)
			sum += num2[j--] - '0';

		// add carry to the sum
		sum += carry;
		// carry is always the leftmost digit of a number
		carry = sum / 10;

		// concatenate the last digit of the sum after converting
		// it into string using to_string function
		ans += std::to_string(sum % 10);
	}

	// as the required sum is obtained in the reverse manner,
	// reverse the sum to obtain the actual answer
	std::reverse(ans.begin(), ans.end());
	return ans;
}


int main()
{
	std::cout << addStrings("11", "123") << '\n';
	std::cout << addStrings("456", "77") << '\n';
	std::cout << addStrings("0", "0") << '\n';
	std::cout << addStrings("1", "9") << '\n';
	std::cout << addStrings("9", "99") << '\n';




	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
