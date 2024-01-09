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

// 17ms 16.1MB
int minOperations(vector<int>& nums) {
	int count = 0;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] <= nums[i - 1])
		{
			count += nums[i - 1] + 1 - nums[i];
			nums[i] = nums[i - 1] + 1;
		}
	}

	return count;
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
