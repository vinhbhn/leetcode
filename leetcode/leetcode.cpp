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

// https://leetcode.com/problems/path-crossing/solutions/4443651/beats-100-explained-with-video-c-java-python-js-map-single-pass-visualized/?envType=daily-question&envId=2023-12-23
// O(n) O(n) 5ms 7.1MB
bool isPathCrossing(string path) {
	unordered_map<char, pair<int, int>> moves;
	moves['N'] = { 0, 1 };
	moves['S'] = { 0, -1 };
	moves['W'] = { -1, 0 };
	moves['E'] = { 1, 0 };

	unordered_set<string> visited;
	visited.insert("0,0");

	int  x = 0, y = 0;
	for (char c : path)
	{
		pair<int, int> curr = moves[c];
		x += curr.first;
		y += curr.second;

		string hash = to_string(x) + "," + to_string(y);

		if (visited.contains(hash))
			return true;

		visited.insert(hash);
	}

	return false;
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
