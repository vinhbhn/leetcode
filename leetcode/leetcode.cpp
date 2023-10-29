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

// 14ms 13MB
vector<string> topKFrequent(vector<string>& words, int k) {
	unordered_map<string, int> mp;
	for (auto& w : words)
		mp[w]++;

	typedef pair<string, int> P;
	vector<P> v;
	for (auto& x : mp)
		v.push_back({ x.first, x.second });

	auto cmp = [&](P& a, P& b)
		{
			return (a.second == b.second) ? a.first < b.first : a.second > b.second;
		};
	sort(v.begin(), v.end(), cmp);

	vector<string> res;
	for (int i = 0; i < k; i++)
		res.push_back(v[i].first);

	return res;
}


int main()
{
	cout << boolalpha;
	vector<string> words = { "i","love","leetcode","i","love","coding" };
	for (auto& x : topKFrequent(words, 2))
		cout << x << ' ';
	cout << '\n';

	words = { "the","day","is","sunny","the","the","the","sunny","is","is" };
	for (auto& x : topKFrequent(words, 4))
		cout << x << ' ';
	cout << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
