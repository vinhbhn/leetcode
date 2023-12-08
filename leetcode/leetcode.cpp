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

// 809ms 300MB
int sumCounts(vector<int>& nums)
{
	int n = nums.size(), res = 0;
	for (int step = 1; step <= n; step++)
	{
		for (int i = 0, j = step; j <= n; i++, j++)
		{
			unordered_set<int> st(nums.begin() + i, nums.begin() + j); // [first, last]
			int sts = st.size();
			res += sts * sts;
		}
	}

	return res;
}

// web 27ms real 39ms 32.7MB
int sumCounts(vector<int>& nums)
{
	int n = nums.size(), res = 0;
	for (int i = 0; i < n; i++)
	{
		unordered_set<int> st;
		for (int j = i; j < n; j++)
		{
			st.insert(nums[j]);
			int val = st.size();
			res += val * val;
		}
	}

	return res;
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
