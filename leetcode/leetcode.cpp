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

// 17ms 10MB O(n*m*n)
int deleteGreatestValue(vector<vector<int>>& grid) {
	int res = 0;

	// if grid.empty() is [], while not work
	while (!grid[0].empty())
	{
		int max_c = 0;
		for (int i = 0; i < grid.size(); i++)
		{
			auto temp = max_element(grid[i].begin(), grid[i].end());

			max_c = max(max_c, *temp);

			grid[i].erase(temp); // delete the greatest value in row
		}

		res += max_c; // add the greatest value in grid after loop
	}

	return res;
}

// web 0ms real 8ms 9.7MB O(mlogm + m*n)
int deleteGreatestValue(vector<vector<int>>& grid) {
	int res = 0;
	for (int i = 0; i < grid.size(); i++)
	{
		sort(grid[i].begin(), grid[i].end());
	}

	for (int j = 0; j < grid[0].size(); j++)
	{
		int max_c = 0;
		for (int i = 0; i < grid.size(); i++)
		{
			max_c = max(max_c, grid[i][j]);
		}

		res += max_c; // add the greatest value in col grid after loop
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
