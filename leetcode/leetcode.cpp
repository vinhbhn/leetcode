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

// 3ms 8.9MB O(nlogn) O(1)
vector<int> countBits(int n) {
	vector<int> res;
	for (int i = 0; i <= n; i++)
	{
		bitset<32> b(i);
		res.push_back(popcount(b.to_ulong()));
	}

	return res;
}

// O(n) O(1) 7ms 22.1MB
int sumIndicesWithKSetBits(vector<int>& nums, int k) {
	int sum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		bitset<16> b(i);
		if (popcount(b.to_ulong()) == k)
			sum += nums[i];
	}

	return sum;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
