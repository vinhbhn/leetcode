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

// 55ms 32.5MB O(n) O(n)
vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
	sort(arr.begin(), arr.end());

	int m = INT_MAX;
	for (int i = 1; i < arr.size(); i++)
	{
		m = min(m, abs(arr[i] - arr[i - 1]));
	}

	vector<vector<int>> res;
	for (int i = 1; i < arr.size(); i++)
	{
		if (abs(arr[i] - arr[i - 1]) == m)
			res.push_back({ arr[i - 1], arr[i] });
	}

	return res;
}

int main() {
	cout << boolalpha;

	vector nums = { 3,4,5,1,2 };
	cout << check(nums) << '\n';

	nums = { 2,1,3,4 };
	cout << check(nums) << '\n';

	nums = { 1,2,3 };
	cout << check(nums) << '\n';

	nums = { 6,10,6 };
	cout << check(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
