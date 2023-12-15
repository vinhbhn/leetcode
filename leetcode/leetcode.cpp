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

string destCity(vector<vector<string>>& paths) {
	unordered_set<string> st;

	for (int i = 0; i < paths.size(); i++)
		st.insert(paths[i][0]); // insert all cityA

	for (int i = 0; i < paths.size(); i++)
	{
		// if cityB not in st, then cityB is destination city
		if (!st.contains(paths[i][1]))
			return paths[i][1];
	}

	return "";
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
