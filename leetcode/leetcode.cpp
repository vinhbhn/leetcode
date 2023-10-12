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

// O(n logN) O(n log N)
//std::vector<int> addToArrayForm(std::vector<int>& num, int k) {
//	std::vector<int> result, vk;
//	while (k > 0)
//	{
//		vk.push_back(k % 10);
//		k /= 10;
//	}
//
//	std::reverse(num.begin(), num.end());
//	int i = 0, j = 0, carry = 0, sum = 0;
//	while (i < num.size() || j < vk.size() || carry)
//	{
//		if (i < num.size())
//			sum += num[i++];
//		if (j < vk.size())
//			sum += vk[j++];
//		sum += carry;
//
//		result.push_back(sum % 10);
//		carry = sum / 10;
//		sum = 0;
//	}
//
//	std::reverse(result.begin(), result.end());
//	return result;
//}

// fastest in four ways
// O(n logN) O(n log N)
std::vector<int> addToArrayForm(std::vector<int>& num, int k) {
	std::vector<int> result;
	std::reverse(num.begin(), num.end());
	int i = 0, carry = 0, sum = 0;
	while (i < num.size() || k > 0 || carry)
	{
		if (i < num.size())
			sum += num[i++];
		if (k > 0)
		{
			sum += k % 10;
			k /= 10;
		}

		sum += carry;

		result.push_back(sum % 10);
		carry = sum / 10;
		sum = 0;
	}

	std::reverse(result.begin(), result.end());
	return result;
}

// https://leetcode.com/problems/add-to-array-form-of-integer/solutions/3187080/simplest-solution-full-explanation-c-python3-java/
// O(n) O(1)
//std::vector<int> addToArrayForm(std::vector<int>& num, int k) {
//	for (int i = num.size() - 1; i >= 0; i--)
//	{
//		num[i] += k;
//		k = num[i] / 10;
//		num[i] %= 10;
//	}
//	while (k > 0) // still carry
//	{
//		num.insert(num.begin(), k % 10);
//		k /= 10;
//	}
//	return num;
//}

// https://leetcode.com/problems/add-to-array-form-of-integer/solutions/3187149/c-faster-than-95-no-shortcut-mehthod-self-explanatory-code/
//std::vector<int> addToArrayForm(std::vector<int>& num, int k) {
//	int carry = 0, i = num.size() - 1, sum = 0;
//	while (i >= 0)
//	{
//		sum = num[i] + (k % 10) + carry;
//		k /= 10;
//
//		num[i--] = sum % 10;
//		carry = sum / 10;
//	}
//
//	while (k > 0)
//	{
//		sum = (k % 10) + carry;
//		k /= 10;
//
//		num.insert(num.begin(), sum % 10);
//		carry = sum / 10;
//	}
//
//	if (carry > 0)
//		num.insert(num.begin(), carry);
//
//	return num;
//}

int main()
{
	std::vector<int> num = { 1,2,0,0 };
	int k = 34;
	for (auto& x : addToArrayForm(num, k))
		std::cout << x << ' ';
	std::cout << '\n';

	num = { 2,7,4 };
	k = 181;
	for (auto& x : addToArrayForm(num, k))
		std::cout << x << ' ';
	std::cout << '\n';

	num = { 2,1,5 };
	k = 806;
	for (auto& x : addToArrayForm(num, k))
		std::cout << x << ' ';
	std::cout << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
