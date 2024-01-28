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

// 31ms 32MB O(n^2)
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
	int miss = 0, repeated = 0, n = grid.size() * grid[0].size();

	unordered_map<int, int> mp;
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[0].size(); j++)
		{
			mp[grid[i][j]]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (mp[i] == 2)
			repeated = i;
		else if (mp[i] == 0)
			miss = i;
	}

	return { repeated, miss };
}

// web 0ms real 10ms 25.7MB
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
	int miss = 0, repeated = 0, n = grid.size();

	vector<int> f(n * n + 1, 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			f[grid[i][j]]++;
		}
	}

	for (int i = 1; i <= n * n; i++)
	{
		if (f[i] == 2)
			repeated = i;
		else if (f[i] == 0)
			miss = i;
	}

	return { repeated, miss };
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
