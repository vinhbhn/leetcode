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

// 0ms 8.9MB O(n) SC: O(n+m)
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
	vector<int> target;

	for (int i = 0; i < index.size(); i++)
	{
		if (index[i] > target.size())
		{
			target.push_back(nums[i]);
		}
		else
		{
			target.insert(target.begin() + index[i], nums[i]);
		}
	}

	return target;
}

// 0ms 8.8MB O(n) SC: O(n+m)
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
	vector<int> target;

	for (int i = 0; i < index.size(); i++)
	{
		target.insert(target.begin() + index[i], nums[i]);
	}

	return target;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
