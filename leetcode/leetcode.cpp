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


// O(n) O(1) 3ms 7.8MB
int countKeyChanges(string s) {
	transform(s.begin(), s.end(), s.begin(), ::tolower);

	int count = 0;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] != s[i + 1])
		{
			count++;
		}
	}

	return count;
}

int main() {
	cout << boolalpha;
	
	cout << countKeyChanges("aAbBcC") << '\n';
	cout << countKeyChanges("AaAaAaaA") << '\n';
	cout << countKeyChanges("AaAaAaaAb") << '\n';



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
