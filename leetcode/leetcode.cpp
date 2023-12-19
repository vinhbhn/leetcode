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

// 8ms 12.3MB O(n^2) O(n)
int countPairs(vector<int>& nums, int k) {
	int count = 0, n = nums.size();

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((nums[i] == nums[j]) && (i * j % k == 0))
				count++;
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
