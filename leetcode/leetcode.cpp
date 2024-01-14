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

// 8ms 14MB
int averageValue(vector<int>& nums) {
	int count = 0, sum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] % 2 == 0 and nums[i] % 3 == 0)
		{
			sum += nums[i];
			count++;
		}
	}

	if (count == 0)
		return 0; 

	return sum / count;
}

// web 4ms 14.1MB
int averageValue(vector<int>& nums) {
	int count = 0, sum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] % 6 == 0)
		{
			sum += nums[i];
			count++;
		}
	}

	if (count == 0)
		return 0;

	return sum / count;
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
