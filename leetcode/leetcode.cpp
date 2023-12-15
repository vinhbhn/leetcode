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

// 4ms 10.9MB
vector<int> decompressRLElist(vector<int>& nums) {
	vector<int> res;
	for (int i = 0; i < nums.size(); i+=2)
	{
		vector<int> temp(nums[i], nums[i + 1]);
		res.insert(res.end(), temp.begin(), temp.end());
	}

	return res;
}

// 4ms 10.3MB 
vector<int> decompressRLElist(vector<int>& nums) {
	vector<int> res;
	for (int i = 0; i < nums.size(); i += 2)
	{
		for (int j = 0; j < nums[i]; j++)
		{
			res.push_back(nums[i + 1]);
		}
	}

	return res;
}


int main() {
	cout << boolalpha;
	vector<int> nums = { 1,2,3,4 };
	for (auto& x : decompressRLElist(nums))
		cout << x << ' ';
	cout << '\n';

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
