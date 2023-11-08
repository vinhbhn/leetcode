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

// 5ms 8.6MB O(n) O(1)
bool isOdd(int num)
{
	return (num % 2 == 1);
}
bool threeConsecutiveOdds(vector<int>& arr) {
	if (arr.size() < 3)
		return false;

	for (int i = 0; i < arr.size() - 2; i++)
	{
		if (isOdd(arr[i]) && isOdd(arr[i + 1]) && isOdd(arr[i + 2]))
			return true;
	}

	return false;
}

// web 0ms real 3ms 8.8MB
bool threeConsecutiveOdds(vector<int>& arr) {
	int count = 0;
	for (int num : arr)
	{
		if (num % 2 == 1)
		{
			count++;
			if (count == 3)
				return true;
		}
		else
			count = 0; // resetting the counter if an even number is encountered
	}

	return false;
}

int main() {
	cout << boolalpha;

	vector nums = { 6,5,7,9,2,2 };
	cout << minimumCost(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
