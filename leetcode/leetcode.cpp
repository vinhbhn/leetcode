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

// O(1) 0ms 7.4MB
//int minBitFlips(int start, int goal) {
//	// no need to flip
//	if (start == goal)
//		return 0;
//
//	bitset<32> s(start), g(goal);
//	string ss = s.to_string(), sg = g.to_string();
//
//	int i = ss.size() - 1, j = sg.size() - 1;
//	int count = 0;
//	while (i >= 0 && j >= 0)
//	{
//		if (ss[i] != sg[j])
//			count++;
//
//		i--;
//		j--;
//	}
//
//	return count;
//}

int minBitFlips(int start, int goal) {
	// no need to flip
	if (start == goal)
		return 0;

	int xorNum = start ^ goal;
	int res = 0;
	while (xorNum)
	{
		if (xorNum & 1) // check lsb == 1
			res++;

		xorNum >>= 1;
	}

	return res;
}

int main() {
	cout << boolalpha;

	cout << minBitFlips(10, 7) << '\n';
	cout << minBitFlips(3, 4) << '\n';

	cout << minBitFlips(90977991, 38037526) << '\n';




	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
