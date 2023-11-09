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

// 3ms 9.6MB O(nlogn + n) O(logn)
bool canMakeArithmeticProgression(vector<int>& arr) {
	int n = arr.size();
	sort(arr.begin(), arr.end());

	int diff = arr[1] - arr[0];
	for (int i = 2; i < n; i++)
	{
		if (arr[i] - arr[i - 1] != diff)
			return false;
	}

	return true;
}

int main() {
	cout << boolalpha;

	vector nums = { 6,5,7,9,2,2 };
	cout << minimumCost(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
