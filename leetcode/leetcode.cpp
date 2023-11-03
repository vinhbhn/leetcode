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

// 0ms 8MB O(n + nlogn) O(1)
//int lastStoneWeight(vector<int> &s) {
//	make_heap(s.begin(), s.end());
//
//	while (s.size() > 2)
//	{
//		sort(s.begin(), s.end());
//
//		auto last1 = s.back();
//		s.pop_back();
//
//		auto last2 = s.back();
//		s.pop_back();
//
//		if (last1 != last2)
//		{
//			s.push_back(last1 - last2);
//		}
//	}
//
//	// maybe have size 1 or 2
//	if (s.size() == 2)
//	{
//		s[0] = abs(s[0] - s[1]);
//	}
//
//	return s[0];
//}

// 0ms 8MB O(n + nlogn) O(1)
int lastStoneWeight(vector<int>& s) {
	make_heap(s.begin(), s.end());

	while (s.size() > 1)
	{
		sort(s.begin(), s.end());

		auto last1 = s.back();
		s.pop_back();

		auto last2 = s.back();
		s.pop_back();

		if (last1 != last2)
		{
			s.push_back(last1 - last2);
		}
	}

	return s.empty() ? 0 : s[0];
}

int main()
{
	vector s = { 2,7,4,1,8,1 };
	cout << lastStoneWeight(s) << '\n';

	s = { 2,2 };
	cout << lastStoneWeight(s) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
