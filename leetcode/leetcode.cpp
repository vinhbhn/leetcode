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

// O(n) 0ms 8.3MB
string getEncryptedString(string s, int k) {
	string sc = s;
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		sc[i] = s[(i + k) % n];
	}

	return sc;
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
