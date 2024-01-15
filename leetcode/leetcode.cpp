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

// 25ms 27.8MBS
int search(vector<int>& nums, int target) {
	int low = 0, high = nums.size() - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (nums[mid] < target)
			low = mid + 1;
		else if (nums[mid] > target)
			high = mid - 1;
		else
			return mid;
	}

	return -1;
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
