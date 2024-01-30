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

// 8ms 9.3MB
bool judgeCircle(string moves) {
	int x = 0, y = 0;
	for (auto& move : moves)
	{
		if (move == 'U')
			y++;
		else if (move == 'D')
			y--;
		else if (move == 'L')
			x--;
		else if (move == 'R')
			x++;
	}

	return (x == 0 and y == 0);
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
