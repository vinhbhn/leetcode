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

// https://leetcode.com/problems/kth-distinct-string-in-an-array/solutions/3938530/easy-to-understand-100-fast-c/
string kthDistinct(vector<string>& arr, int k) {
	unordered_map<string, int> mp;
	for (auto& str : arr)
		mp[str]++;

	int count = 0;
	for (auto& str : arr)
	{
		if (mp[str] == 1)
		{
			count++;
			if (count == k)
				return str;
		}
	}

	return "";
}


int main()
{
	cout << boolalpha;
	vector<string> arr = { "y","napli","jfqjc","mbl","oeush" };
	cout << kthDistinct(arr, 3) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
