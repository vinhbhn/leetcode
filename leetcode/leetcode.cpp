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

// 5ms 9MB
//bool check(vector<int>& a) {
//	if (is_sorted(a.begin(), a.end()))
//		return true;
//
//	vector<int> b(a.size() * 2, 0);
//	for (int i = 0; i < b.size(); i++)
//	{
//		b[i] = a[i % a.size()];
//	}
//
//	for (int i = 1; i < b.size() - a.size(); i++)
//	{
//		if (is_sorted(b.begin() + i, b.begin() + i + a.size()))
//			return true;
//	}
//
//	return false;
//}

// 0ms 9MB O(b.size()) O(a.size())
//bool check(vector<int>& a) {
//	vector<int> b(a.size() * 2, 0);
//	for (int i = 0; i < b.size(); i++)
//	{
//		b[i] = a[i % a.size()];
//	}
//
//	for (int i = 0; i < b.size() - a.size(); i++)
//	{
//		if (is_sorted(b.begin() + i, b.begin() + i + a.size()))
//			return true;
//	}
//
//	return false;
//}

// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/solutions/1053508/java-c-python-easy-and-concise/
// O(n) O(1) 2ms 8.5MB
bool check(vector<int>& a) {
	for (int i = 0, k = 0; i < a.size(); i++)
	{
		if (a[i] > a[(i + 1) % a.size()] && ++k > 1)
			return false;
	}
	return true;
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
