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

// O(n) 0ms 8MB
int minimumChairs(string s) {
	int count = 0, res = 0;
	for (auto ch : s)
	{
		if (ch == 'E')
			count++;
		else 
		{
			// res is max the number of people use chair when they still in room
			res = max(res, count);
			count--;
		}
	}

	// if in the end: count != 0
	res = max(res, count);

	return res;
}

int main() {
	cout << boolalpha;

	cout << minimumChairs("EEEEEEE") << '\n';
	cout << minimumChairs("ELELEEL") << '\n';
	cout << minimumChairs("ELEELEELLL") << '\n';

	cout << minimumChairs("ELEE") << '\n';



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
