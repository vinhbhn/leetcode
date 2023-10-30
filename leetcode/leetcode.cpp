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

// 3ms 11.4MB O(nlogn) O(n)
vector<int> sortByBits(vector<int>& arr) {
	vector<int> res;

	typedef pair<int, int> P;
	vector<P> v;
	for (auto num : arr)
	{
		bitset<16> b(num);
		auto x = b.to_ulong();
		v.push_back({ num, popcount(x) });
	}

	auto cmp = [&](P a, P b)
		{
			return (a.second == b.second) ? a.first < b.first : a.second < b.second;
		};
	sort(v.begin(), v.end(), cmp);

	for (auto& a : v)
		res.push_back(a.first);

	return res;
}

int main()
{
	vector arr = { 0,1,2,3,4,5,6,7,8 };
	for (auto x : sortByBits(arr))
		cout << x << ' ';
	cout << '\n';

	arr = { 10000, 10000 };
	for (auto x : sortByBits(arr))
		cout << x << ' ';
	cout << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
