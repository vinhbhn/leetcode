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

// 11ms 9.4MB O(k+n) O(k*n), n = g.size()
long long pickGifts(vector<int>& g, int k) {
	long long res = 0;

	for (int i = 0; i < k; i++)
	{
		auto m = max_element(g.begin(), g.end());
		*m = sqrt(*m);
	}

	for (auto num : g)
		res += num;

	return res;
}

// 15ms 9.7MB
long long pickGifts(vector<int>& g, int k) {
	for (int i = 0; i < k; i++)
	{
		auto m = max_element(g.begin(), g.end());
		*m = sqrt(*m);
	}

	return accumulate(g.begin(), g.end(), 0ll);
}

// web 0ms real 3ms 9.6MB
long long pickGifts(vector<int>& g, int k) {
	make_heap(g.begin(), g.end());
	for (int i = 0; i < k; i++)
	{
		int value = sqrt(g[0]);
		pop_heap(g.begin(), g.end());
		g.back() = value;
		push_heap(g.begin(), g.end());
	}

	return accumulate(g.begin(), g.end(), 0ll);
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
