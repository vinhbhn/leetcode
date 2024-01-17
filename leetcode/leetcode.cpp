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

// 0ms 21.1MB
vector<int> findPeaks(vector<int>& m) {
	vector<int> res;

	for (int i = 1; i < m.size() - 1; i++)
	{
		if (m[i - 1] < m[i] and m[i] > m[i + 1])
			res.push_back(i);
	}

	return res;
}

int main() {
	cout << boolalpha;

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
