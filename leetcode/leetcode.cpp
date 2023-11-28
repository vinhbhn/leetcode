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

// 37ms 16.8MB
bool checkXMatrix(vector<vector<int>>& grid) {
	// odd: 2n - 1, even: 2n
	// other elements are 0
	int n = grid.size(), row = n - 1;
	int total = n * n, count0 = 0;

	// check two diagnoals are non-zero
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (grid[i][j] == 0)
				count0++;
		}

		// left diagnoals
		if (grid[i][i] == 0)
			return false;

		// right diagnoals
		if (grid[row][i] == 0)
			return false;
		else
			row--;
	}

	return (n % 2 == 0) ? (total - count0 == 2 * n) : (total - count0 == 2 * n - 1);
}

// 15ms 16.7MB
bool checkXMatrix(vector<vector<int>>& grid) {
	// odd: 2n - 1, even: 2n
	// other elements are 0
	int n = grid.size();
	int total = n * n, count0 = 0;

	// check two diagnoals are non-zero
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j && grid[i][j] == 0)
				return false;
			else if (i == n - 1 - j && grid[i][j] == 0)
				return false;
			else if (grid[i][j] == 0)
				count0++;
		}
	}

	return (n % 2 == 0) ? (total - count0 == 2 * n) : (total - count0 == 2 * n - 1);
}

// web 14ms real 24ms 16.8MB
bool checkXMatrix(vector<vector<int>>& grid) {
	int n = grid.size();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// check two diagnoals are non-zero
			if ((i == j or i == n - 1 - j) and grid[i][j] == 0)
				return false;
			// other elements are 0
			if (i != j and i != n - 1 - j and grid[i][j] != 0)
				return false;
		}
	}

	return true;
}

int main() {
	cout << boolalpha;


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
