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

// 4ms 7.7MB O(n^2) O(n)
int numberOfArithmeticSlices(vector<int>& nums) {
	int n = nums.size();
	if (n < 3)
		return 0;

	int count = 0;

	for (int i = 0; i < n - 2; i++)
	{
		int diff = nums[i + 1] - nums[i];
		for (int j = i + 2; j < n; j++)
		{
			// ex [1,2,3,4] if 3-2==diff (3 is arthmetic so 4-3==diff therefore 4 is arthmetic but not check all slice)
			// bridging properties
			if (nums[j] - nums[j - 1] == diff)
				count++;
			else
				break;
		}
		
	}

	return count;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
