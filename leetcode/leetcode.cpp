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

// 68ms 31.2MB O(n) O(n)
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
	int count = 0, key = 0; // default to type
	// items[i] = [typeI, colorI, nameI]
	if (ruleKey == "color")
		key = 1;
	else if (ruleKey == "name")
		key = 2;

	for (int i = 0; i < items.size(); i++)
	{
		if (items[i][key] == ruleValue)
			count++;
	}

	return count;
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
