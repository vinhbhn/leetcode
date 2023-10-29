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

int fillCups(vector<int>& a) {
	int second = 0;
	// min, mid, max
	sort(a.begin(), a.end());

	// priority max - min, max - mid
	while (a[0] || a[1] || a[2])
	{
		if (a[0] > 0 && a[2] > 0)
		{
			a[0]--;
			a[2]--;
			second++;
		}

		if (a[1] > 0 && a[2] > 0)
		{
			a[1]--;
			a[2]--;
			second++;
		}

		if (a[0] == 0 && a[1] == 0 && a[2] > 0)
		{
			a[2]--;
			second++;
		}
		else if (a[1] == 0 && a[2] == 0 && a[0] > 0)
		{
			a[0]--;
			second++;
		}
		else if (a[0] == 0 && a[2] == 0 && a[1] > 0)
		{
			a[1]--;
			second++;
		}else if (a[0] > 0 && a[1] > 0 && a[2] == 0)
		{
			a[0]--;
			a[1]--;
			second++;
		}
	}

	return second;
}

// 101ms 51.5MB
vector<int> findDisappearedNumbers(vector<int>& nums) {
	int n = nums.size();
	vector<int> res;
	unordered_map<int, int> mp;
	for (auto num : nums)
		mp[num]++;

	for (int i = 1; i <= n; i++)
	{
		if (mp[i] == 0)
			res.push_back(i);
	}

	return res;
}

// 85ms 45.2MB O(nlogn) O(n)
vector<int> findDisappearedNumbers(vector<int>& nums) {
	int n = nums.size();
	vector<int> res;
	unordered_set<int> st;

	for (auto num : nums)
		st.insert(num);

	for (int i = 1; i <= n; i++)
	{
		//if (st.find(i) == st.end())
		if (!st.count(i))
			res.push_back(i);
	}

	return res;
}

//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/solutions/1583736/c-python-all-6-solutions-w-explanations-binary-search-hashset-2x-o-1-space-approach/
// O(nlogN) O(sort)->O(1) 84ms 34.1MB
vector<int> findDisappearedNumbers(vector<int>& nums) {
	vector<int> res;
	sort(nums.begin(), nums.end());

	for (int i = 1; i <= nums.size(); i++)
	{
		if (!binary_search(nums.begin(), nums.end(), i)) // binary search in nums for each i
			res.push_back(i);
	}

	return res;
}
// O(n) O(n) 39ms 34MB
vector<int> findDisappearedNumbers(vector<int>& nums) {
	vector<bool> seen(nums.size() + 1);
	vector<int> res;

	for (auto c : nums)
		seen[c] = true;

	for (int i = 1; i <= nums.size(); i++)
	{
		if(!seen[i])
			res.push_back(i);
	}

	return res;
}
// O(n) O(1) 47ms 33.9MB
vector<int> findDisappearedNumbers(vector<int>& nums) {
	vector<int> res;

	for (auto& c : nums)
		while (nums[c - 1] != c)
			swap(c, nums[c - 1]); // swap till correct index place of c is not occupied by c ifself

	for (int i = 1; i <= nums.size(); i++)
	{
		if(i != nums[i-1])
			res.push_back(i); // correct index place of i is not occupied by i itself
	}

	return res;
}
// O(n) O(1) 38ms 34.1MB
vector<int> findDisappearedNumbers(vector<int>& nums) {
	vector<int> res;

	for (auto c : nums)
	{
		nums[abs(c) - 1] = -abs(nums[abs(c) - 1]); // mark c is present by negating nums[c-1]
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > 0)
			res.push_back(i + 1); // nums[i] > 0 means i+1 isnt present in nums
	}

	return res;
}


int main()
{
	cout << boolalpha;
	vector<int> a = { 1,4,2 };
	cout << fillCups(a) << '\n';

	a = { 5,4,4 };
	cout << fillCups(a) << '\n';

	a = { 5,0,0 };
	cout << fillCups(a) << '\n';

	a = { 2,4,2 };
	cout << fillCups(a) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
