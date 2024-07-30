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

// O(n) O(1) 0ms 8.6MB
int scoreOfString(string s) {
	int ans = 0;
	 
	for (int i = 0; i < s.size() - 1; i++)
	{
		ans += abs(s[i] - s[i + 1]);
	}

	return ans;
}

int main() {
	cout << boolalpha;

	cout << scoreOfString("hello") << '\n';


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
