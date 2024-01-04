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

// 168ms 68.7MB O(nlogn)
int maxWidthOfVerticalArea(vector<vector<int>>& points) {
	vector<int> x;
	for (int i = 0; i < points.size(); i++)
	{
		x.push_back(points[i][0]);
	}

	sort(x.begin(), x.end());

	int res = 0;
	for (int i = 1; i < x.size(); i++)
	{
		res = max(res, x[i] - x[i - 1]);
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
