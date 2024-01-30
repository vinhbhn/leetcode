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

// 0ms 8.2MB O(n)
int furthestDistanceFromOrigin(string moves) {
	int l = 0, r = 0, u = 0;
	for (int i = 0; i < moves.size(); i++)
	{
		if (moves[i] == 'L')
			l++;
		else if (moves[i] == 'R')
			r++;
		else
			u++;
	}

	return (l >= r) ? (l - r + u) : (r - l + u);
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
