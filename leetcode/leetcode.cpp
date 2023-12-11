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

// 4ms 11MB O(m*n) O(m*n)
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
	int m = matrix.size(), n = matrix[0].size();

	// matrix m * n transpose n * m
	vector<vector<int>> res;
	for (int i = 0; i < n; i++)
	{
		vector<int> temp;
		for (int j = 0; j < m; j++)
		{
			temp.push_back(matrix[j][i]);
		}
		res.push_back(temp);
	}

	return res;
}

// web 0ms real 7ms 10.9MB
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
	int m = matrix.size(), n = matrix[0].size();

	// matrix m * n transpose n * m
	vector<vector<int>> res(n, vector<int>(m));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			res[j][i] = matrix[i][j];
		}
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
