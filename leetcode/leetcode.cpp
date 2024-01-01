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

// 4ms 7.4MB O(nlogn + n/2) O(1)
int distinctAverages(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	unordered_set<float> st;

	int i = 0, j = nums.size() - 1;
	while (i <= j)
	{
		st.insert((nums[i] + nums[j]) / 2.0); // different between 2 and 2.0
		i++;
		j--;
	}

	return static_cast<int>(st.size());
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
