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

// 0ms 6.4MB 
int subtractProductAndSum(int n) {
	vector<int> nums;
	while (n)
	{
		nums.push_back(n % 10);
		n /= 10;
	}

	int productOfDigits = nums[0];
	for (int i = 1; i < nums.size(); i++)
		productOfDigits *= nums[i];

	int sum = accumulate(nums.begin(), nums.end(), 0);

	return productOfDigits - sum;
}

// 2ms 6.3MB
int subtractProductAndSum(int n) {
	int productOfDigits = 1, sum = 0;

	while (n)
	{
		int digit = n % 10;
		productOfDigits *= digit;
		sum += digit;
		n /= 10;
	}

	return productOfDigits - sum;
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
