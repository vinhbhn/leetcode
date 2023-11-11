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

// 4ms 11.2MB O(n*k) O(k)
vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
	vector<int> res, keys;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == key)
			keys.push_back(i);
	}

	if (keys.empty())
		return res;

	for (int i = 0; i < nums.size(); i++)
	{
		for (auto key : keys)
			if (abs(i - key) <= k)
			{
				res.push_back(i);
				break; 
			}
	}

	return res;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
