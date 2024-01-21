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

// 8ms 12.2MB
int findNumbers(vector<int>& nums) {
	int res = 0;
	for (auto& num : nums)
	{
		int count = 0, temp = num;
		while (temp)
		{
			count++;
			temp /= 10;
		}

		if (count % 2 == 0)
			res++;
	}

	return res;
}


// web 2ms real 3ms 13.2MB
int findNumbers(vector<int>& nums) {
	int res = 0;
	for (auto& num : nums)
	{
		string temp = to_string(num);

		if (temp.length() % 2 == 0)
			res++;
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
