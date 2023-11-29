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

// 0ms 6.3MB
int hammingDistance(int x, int y) {
	bitset<32> res(x ^ y);
	return res.count();
}

// 0ms 6.3MB
int hammingDistance(int x, int y) {
	int count = 0;
	while (x || y)
	{
		if ((x & 1) != (y & 1))
			count++;
		x >>= 1;
		y >>= 1;
	}
	return count;
}

int main() {
	cout << boolalpha;


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
