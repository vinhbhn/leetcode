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

// 21ms 11.8MB O(n^2) O(n)
vector<int> luckyNumbers(vector<vector<int>>& matrix) {
	vector<int> vmin, vmax;
	for (auto& it : matrix)
	{
		auto min = min_element(it.begin(), it.end());
		vmin.push_back(*min);
	}

	for (int j = 0; j < matrix[0].size(); j++)
	{
		int max = matrix[0][j];
		for (int i = 1; i < matrix.size(); i++)
			max = ::max(max, matrix[i][j]);

		vmax.push_back(max);
	}

	for (auto it : vmin)
	{
		for (int i = 0; i < vmax.size(); i++)
			if (it == vmax[i])
				return { it };
	}

	return {};
}

// 13ms 11.9MB
vector<int> luckyNumbers(vector<vector<int>>& matrix) {
	vector<int> vmin, vmax;
	for (auto& it : matrix)
	{
		auto min = min_element(it.begin(), it.end());
		vmin.push_back(*min);
	}

	for (int j = 0; j < matrix[0].size(); j++)
	{
		int max = matrix[0][j];
		for (int i = 1; i < matrix.size(); i++)
			max = ::max(max, matrix[i][j]);

		vmax.push_back(max);
	}

	for (auto it : vmin)
	{
		if (find(vmax.begin(), vmax.end(), it) != vmax.end())
			return { it };
	}

	return {};
}

// 10ms 11.9MB
vector<int> luckyNumbers(vector<vector<int>>& matrix) {
	vector<int> vmin;
	for (auto& it : matrix)
	{
		auto min = min_element(it.begin(), it.end());
		vmin.push_back(*min);
	}

	for (int j = 0; j < matrix[0].size(); j++)
	{
		int max = matrix[0][j];
		for (int i = 1; i < matrix.size(); i++)
			max = ::max(max, matrix[i][j]);

		if (find(vmin.begin(), vmin.end(), max) != vmin.end())
			return { max };
	}

	return {};
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
