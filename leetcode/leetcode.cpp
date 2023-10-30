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

// 3ms 8.9MB O(nlogn) O(1)
vector<int> countBits(int n) {
	vector<int> res;
	for (int i = 0; i <= n; i++)
	{
		bitset<32> b(i);
		res.push_back(popcount(b.to_ulong()));
	}

	return res;
}

// web 0ms real 3ms 8.2MB O(n) O(1)
vector<int> countBits(int n) {
	vector<int> res(n+1);
	for (int i = 1; i <= n; i++)
	{
		res[i] = res[i & (i - 1)] + 1;
	}

	return res;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
