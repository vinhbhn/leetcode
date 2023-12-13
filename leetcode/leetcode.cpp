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

// https://leetcode.com/problems/special-positions-in-a-binary-matrix/solutions/4397677/beats-100-explained-with-video-check-row-and-column-c-java-python-js-visualized/?envType=daily-question&envId=2023-12-13
// 15ms 13MB O(n*m) O(1)
int checkRow(std::vector<std::vector<int>>& mat, int i) {
	int index = -1;
	for (int j = 0; j < mat[0].size(); j++) {
		if (mat[i][j] == 1) {
			if (index >= 0)
				return -1;
			else
				index = j;
		}
	}
	return index;
}
bool checkColumn(std::vector<std::vector<int>>& mat, int i, int index) {
	for (int j = 0; j < mat.size(); j++) {
		if (mat[j][index] == 1 && j != i)
			return false;
	}
	return true;
}
int numSpecial(std::vector<std::vector<int>>& mat) {
	int specials = 0;

	for (int i = 0; i < mat.size(); i++) {
		int index = checkRow(mat, i);
		if (index >= 0 && checkColumn(mat, i, index))
			specials++;
	}

	return specials;
}

int main() {
	cout << boolalpha;
	vector<vector<int>> mat = { {1,0,0}, {0,0,1}, {1,0,0} };
	cout << numSpecial(mat) << '\n';

	mat = { {1,0,0}, {0,1,0}, {0,0,1} };
	cout << numSpecial(mat) << '\n';

	mat = { {0,0}, {0,0}, {1,0} };
	cout << numSpecial(mat) << '\n';

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
