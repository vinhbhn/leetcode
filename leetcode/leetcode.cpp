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

// 95ms 32.8MB O(n^3) O(n)
double area(vector<int> a, vector<int> b, vector<int> c)
{
	int x1 = a[0];
	int y1 = a[1];
	int x2 = b[0];
	int y2 = b[1];
	int x3 = c[0];
	int y3 = c[1];
	return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)); // shoelace's formula
}
double largestTriangleArea(vector<vector<int>>& p) {
	double res = 0;
	for (int i = 0; i < p.size() - 2; i++)
	{
		for (int j = i + 1; j < p.size() - 1; j++)
		{
			for (int k = j + 1; k < p.size(); k++)
			{
				res = max(res, area(p[i], p[j], p[k]));
			}
		}
	}

	return res;
}

// 6ms 7.9MB O(n^3) O(n)
double largestTriangleArea(vector<vector<int>>& p) {
	double res = 0;
	for (int i = 0; i < p.size() - 2; i++)
	{
		int x1 = p[i][0];
		int y1 = p[i][1];
		for (int j = i + 1; j < p.size() - 1; j++)
		{
			int x2 = p[j][0];
			int y2 = p[j][1];
			for (int k = j + 1; k < p.size(); k++)
			{
				int x3 = p[k][0];
				int y3 = p[k][1];
				res = max(res, 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))); // shoelace's formula
			}
		}
	}

	return res;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
