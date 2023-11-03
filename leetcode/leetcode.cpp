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

// 22ms 26.2MB O(n) O(n)
int findKOr(vector<int>& nums, int k) {
	vector<int> res(32, 0);
	int sum = 0;
	for (int bit = 0; bit < 32; bit++)
	{
		long temp = pow(2, bit);
		for (auto x : nums)
		{
			if ((temp & x) == temp)
				res[bit]++;
		}

		if (res[bit] >= k)
			sum += temp;
	}

	return sum;
}

// 12ms 25.8MB
int findKOr(vector<int>& nums, int k) {
	int sum = 0;
	for (int bit = 0; bit < 32; bit++)
	{
		long pow2bit = pow(2, bit);
		int count = 0;
		for (auto x : nums)
			if ((pow2bit & x) == pow2bit)
				count++;

		if (count >= k)
			sum += pow2bit;
	}

	return sum;
}

// web 0ms real 12ms 25.6MB
int findKOr(vector<int>& nums, int k) {
	int res = 0;
	for (int bit = 0; bit <= 31; bit++)
	{
		int set = 1 << bit;
		int count = 0;
		for (auto x : nums)
			if (set & x)
				count++;

		if (count >= k)
			res = res | set;
	}

	return res;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
