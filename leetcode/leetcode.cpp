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

// https://leetcode.com/problems/check-if-it-is-a-straight-line/solutions/3598587/python-java-c-simple-solution-easy-to-understand/
// 11ms 10.4MB
bool checkStraightLine(vector<vector<int>>& co) {
	int x0 = co[0][0];
	int y0 = co[0][1];
	int x1 = co[1][0];
	int y1 = co[1][1];

	for (int i = 2; i < co.size(); i++)
	{
		int x = co[i][0];
		int y = co[i][1];

		if ((x - x0) * (y1 - y0) != (y - y0) * (x1 - x0))
			return false;
	}

	return true;
}

// web 0ms real 11ms 10.7MB O(n) O(1)
bool checkStraightLine(vector<vector<int>>& coordinates) {
	if (coordinates.size() <= 2) return true;
	int x = coordinates[1][0] - coordinates[0][0];
	int y = coordinates[1][1] - coordinates[0][1];

	auto good = [&](vector<int>& v) -> bool {
		return x * (v[1] - coordinates[1][1]) == y * (v[0] - coordinates[1][0]);
		};
	for (int i = 1; i < coordinates.size(); i++)
		if (!good(coordinates[i]))
			return false;

	return true;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
