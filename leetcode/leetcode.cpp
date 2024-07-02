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

// O(n) 3ms 8.3MB
int findPermutationDifference(string s, string t) {
	int res = 0;

	for (int i = 0; i < s.size(); i++)
	{
		// permutation difference between index 
		res += abs(static_cast<int>(t.find(s[i])) - i);
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
