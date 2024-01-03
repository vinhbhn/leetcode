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

// 81ms 29.4MB O(b*b[0])
int countLaser(string s)
{
	int count = 0;
	for (auto& ch : s)
		if (ch == '1')
			count++;

	return count;
}
int numberOfBeams(vector<string>& bank) {
	vector<int> nums;
	int temp = 0;
	for (int i = 0; i < bank.size(); i++)
	{
		temp = countLaser(bank[i]);
		if (temp != 0)
			nums.push_back(temp);
	}

	int res = 0;
	for (int i = 1; i < nums.size(); i++)
	{
		res += nums[i] * nums[i - 1];
	}

	return res;
}

// 83ms 29.1MB O(b*b[0])
int countLaser(string s)
{
	int count = 0;
	for (auto& ch : s)
		if (ch == '1')
			count++;

	return count;
}
int numberOfBeams(vector<string>& bank) {
	int temp = 0, res = 0, lastValue = 0;
	for (int i = 0; i < bank.size(); i++)
	{
		temp = countLaser(bank[i]);
		if (temp != 0)
		{
			res += lastValue * temp;
			lastValue = temp;
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
