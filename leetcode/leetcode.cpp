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

// 8ms 9.5MB O(n) O(n)
vector<int> maxSubsequence(vector<int>& nums, int k) {
	while (nums.size() > k)
		nums.erase(min_element(nums.begin(), nums.end()));

	return nums;
}

int main() {
	vector a = { 1,4,2 };
	cout << fillCups(a) << '\n';

	a = { 5,4,4 };
	cout << fillCups(a) << '\n';

	a = { 5,3,5 };
	cout << fillCups(a) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
