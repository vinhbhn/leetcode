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

// O(nlogn) 0ms 23.9MB
int minOperations(vector<int>& nums, int k) {
	sort(nums.begin(), nums.end());

	int res = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < k)
			res++; // the number of elements < k
		else
			break;
	}

	return res;
}

// O(n) 
int minOperations(vector<int>& nums, int k) {
	int res = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < k)
			res++; // the number of elements < k
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
