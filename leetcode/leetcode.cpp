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

// 72ms 51.6MB O(nlogn) O(n)
int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
	// sort and check arr[0] == 1
	sort(arr.begin(), arr.end());
	arr[0] = 1;

	// The absolute difference between any 2 adjacent elements must be less than or equal to 1.
	// Decrease the value of any element of arr to a smaller positive integer if it's not meet the above condition.
	for (int i = 1; i < arr.size(); i++)
	{
		if (abs(arr[i] - arr[i - 1]) > 1)
			arr[i] = arr[i - 1] + 1;
	}

	return arr.back();
}

int main() {
	cout << boolalpha;
	cout << countPalindromicSubsequence("aabca") << '\n';
	cout << countPalindromicSubsequence("bbcbaba") << '\n';
	cout << countPalindromicSubsequence("adc") << '\n';


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
