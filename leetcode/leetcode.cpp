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

// 3ms 11.5MB 
int diagonalSum(vector<vector<int>>& mat) {
	int pri = 0, sec = 0;
	int n = mat[0].size();
	for (int row = 0, l = 0, r = n - 1; (row < n) && (l < n) && (r >= 0); row++, l++, r--)
	{
		// center will add only one element
		// if and only if the length of the matrix is odd
		if (n % 2 == 1 && l == r)
		{
			pri += mat[row][l];
			continue;
		}

		pri += mat[row][l];
		sec += mat[row][r];
	}

	return pri + sec;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
