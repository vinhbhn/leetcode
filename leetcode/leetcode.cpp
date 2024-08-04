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

// O(N) O(1) 8ms 27.7MB
int encrypt(int num)
{
	int largest_digit = 0, count = 0;

	while (num)
	{
		largest_digit = max(largest_digit, num % 10);
		count++;
		num /= 10;
	}

	int ans = 0;
	while (count--)
	{
		ans += largest_digit * static_cast<int>(pow(10, count));
	}

	return ans;
}
int sumOfEncryptedInt(vector<int>& nums) {
	int res = 0;
	for (int num : nums)
	{
		res += encrypt(num);
	}

	return res;
}

int main() {
	cout << boolalpha;

	cout << encrypt(123) << '\n';

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
