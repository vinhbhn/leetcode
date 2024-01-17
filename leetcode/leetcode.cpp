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

// 11ms 12.3MB
int maxValueInMatrix3x3(vector<vector<int>>& grid, int row, int col)
{
	int val = 0;
	for (int i = row; i < row + 3; i++)
	{
		for (int j = col; j < col + 3; j++)
		{
			val = max(val, grid[i][j]);
		}
	}

	return val;
}
vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
	vector<vector<int>> res;

	for (int i = 0; i < grid.size() - 2; i++)
	{
		vector<int> t;
		for (int j = 0; j < grid[0].size() - 2; j++)
		{
			t.push_back(maxValueInMatrix3x3(grid, i, j));
		}
		res.push_back(t);
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
