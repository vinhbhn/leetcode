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

// 251ms 95.1MB
bool checkValid(vector<vector<int>>& matrix) {
	int n = matrix[0].size();

	// check row
	for (int row = 0; row < n; row++)
	{
		set<int> st;
		for (int col = 0; col < n; col++)
		{
			st.insert(matrix[row][col]);
		}
		if (st.size() != n)
			return false;
	}

	// check col
	for (int col = 0; col < n; col++)
	{
		set<int> st;
		for (int row = 0; row < n; row++)
		{
			st.insert(matrix[row][col]);
		}
		if (st.size() != n)
			return false;
	}

	return true;
}

// 217ms 68.7MB
bool checkValid(vector<vector<int>>& matrix) {
	int n = matrix[0].size();
	unordered_set<int> st;

	// check row
	for (int row = 0; row < n; row++)
	{
		st.clear();
		for (int col = 0; col < n; col++)
		{
			st.insert(matrix[row][col]);
		}
		if (st.size() != n)
			return false;
	}

	// check col
	for (int col = 0; col < n; col++)
	{
		st.clear();
		for (int row = 0; row < n; row++)
		{
			st.insert(matrix[row][col]);
		}
		if (st.size() != n)
			return false;
	}

	return true;
}

// 83ms 35.7MB
bool checkValid(vector<vector<int>>& matrix) {
	int n = matrix[0].size();

	for (int i = 0; i < n; i++)
	{
		vector<bool> r(n, false);
		vector<bool> c(n, false);

		// check row
		for (int j = 0; j < n; j++)
		{
			r[matrix[i][j] - 1] = true;
		}
		if (count(r.begin(), r.end(), true) != n)
			return false;

		// check col
		for (int j = 0; j < n; j++)
		{
			c[matrix[j][i] - 1] = true;
		}
		if (count(c.begin(), c.end(), true) != n)
			return false;
	}

	return true;
}

// 100ms 35.7MB
bool checkValid(vector<vector<int>>& matrix) {
	int n = matrix[0].size();

	for (int i = 0; i < n; i++)
	{
		vector<bool> rowCheck(n, false);
		vector<bool> colCheck(n, false);

		// check row
		for (int j = 0; j < n; j++)
		{
			rowCheck[matrix[i][j] - 1] = true; // check row
			colCheck[matrix[j][i] - 1] = true; // check col
		}
		if (count(rowCheck.begin(), rowCheck.end(), true) != n || count(colCheck.begin(), colCheck.end(), true) != n)
			return false;
	}

	return true;
}

// web 63ms real 88ms 35.3MB
bool checkValid(vector<vector<int>>& matrix) {
	int n = matrix[0].size();

	for (int i = 0; i < n; i++)
	{
		bitset<101> row;
		bitset<101> col;

		// check row
		for (int j = 0; j < n; j++)
		{
			row[matrix[i][j]] = true;
		}
		if (row.count() < n)
			return false;

		// check col
		for (int j = 0; j < n; j++)
		{
			col[matrix[j][i]] = true;
		}
		if (col.count() < n)
			return false;
	}

	return true;
}

// web 63ms real 91ms 35.3MB
bool checkValid(vector<vector<int>>& matrix) {
	int n = matrix[0].size();

	for (int i = 0; i < n; i++)
	{
		bitset<101> row;
		bitset<101> col;

		// check row
		for (int j = 0; j < n; j++)
		{
			row[matrix[i][j]] = true;
			col[matrix[j][i]] = true;
		}
		if (min(row.count(), col.count()) < n)
			return false;
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
