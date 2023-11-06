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

// 2ms 8.3MB O(n) O(nlogn)
vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
	// map arr1
	unordered_map<int, int> mp;
	for (auto num : arr1)
		mp[num]++;

	// insert element in arr1 (from map) to arr2 (subtract 1)
	// element do not appear in arr2 save it to v
	// sort v to ascending
	// push element from v to arr2
	vector<int> v;
	for (auto& x : mp)
	{
		auto pos = find(arr2.begin(), arr2.end(), x.first);
		if (pos != arr2.end())
		{
			// subtract 1 from x.second because arr2 have the one
			while (x.second > 1)
			{
				pos = arr2.insert(pos, x.first);
				x.second--;
			}
		}
		else
		{
			while (x.second--)
				v.push_back(x.first);
		}
	}
	if (!v.empty())
		sort(v.begin(), v.end());
	
	for (auto num : v)
		arr2.push_back(num);

	return arr2;
}

int main() {
	cout << boolalpha;

	vector nums = { 3,4,5,1,2 };
	cout << check(nums) << '\n';

	nums = { 2,1,3,4 };
	cout << check(nums) << '\n';

	nums = { 1,2,3 };
	cout << check(nums) << '\n';

	nums = { 6,10,6 };
	cout << check(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
