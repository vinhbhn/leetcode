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

// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/solutions/3026209/c-o-n-readable-code-beats-100/
// O(n) O(1)
int sumOddLengthSubarrays(std::vector<int>& arr) {
	int sum = 0, left = 0, right = 0, total = 0, odd = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		left = i + 1; // subarrays ending with arr[i]
		right = arr.size() - i; // subarray starting with arr[i]
		total = left * right; // total times the arr[i] appears in all subarrays
		odd = (total + 1) / 2; // no. of times arr[i] appears in odd length subarrays
		sum += odd * arr[i]; // then we multiply it with arr[i] to get the sum of all arr[i] appearences in odd length subarrays
	}

	return sum;
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << areOccurrencesEqual("abacbc") << '\n';
	std::cout << areOccurrencesEqual("aaabb") << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
