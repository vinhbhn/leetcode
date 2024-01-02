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

// 22ms 24.4MB O(nlogn + n/2) O(n)
vector<int> numberGame(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	vector<int> res;
	for (int i = 0; i < nums.size() - 1; i += 2)
	{
		res.push_back(nums[i + 1]); // bob remove second minimum then append first
		res.push_back(nums[i]); // alice remove first minimum then append after Bob
	}

	return res;
}

// 23ms 24.4MB O(nlogn + n/2) O(n)
vector<int> numberGame(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size() - 1; i += 2)
		swap(nums[i], nums[i + 1]);

	return nums;
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
