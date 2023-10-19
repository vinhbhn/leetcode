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

//vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//	vector<int> res;
//	for (auto& x : mat)
//	{
//		int count = 0;
//		for (auto i : x)
//			if (i == 1)
//				count++;
//
//		res.push_back(count);
//	}
//
//	auto max = max_element(res.begin(), res.end());
//
//	for (int i = 0; i < res.size(); i++)
//		if (res[i] == *max)
//			return { i, *max };
//
//	return { 0, *max };
//}

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
	vector<int> res;
	int maxi = 0;
	int index = 0; // if no row found still return 0
	for (int i = 0; i < mat.size(); i++)
	{
		int count = 0;
		for (int j = 0; j < mat[0].size(); j++)
		{
			if (mat[i][j] == 1)
				count++;
		}

		if (count > maxi)
		{
			index = i;
			maxi = count;
		}
	}

	return { index, maxi };
}

int main()
{
	{
		vector<int> nums = { {0,1}, {1,0} };
		cout << differenceOfSum(nums) << '\n';
		nums = { 1,2,3,4 };
		cout << differenceOfSum(nums) << '\n';

		return 0;
	}
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
