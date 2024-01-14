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

// 25ms 25.1MB
vector<int> decode(vector<int>& encoded, int first) {
	int n = encoded.size();
	vector<int> res(n + 1, 0);
	res[0] = first;

	for (int i = 0; i < n; i++)
	{
		res[i + 1] = res[i] ^ encoded[i];
	}

	return res;
}

// 19ms 25.4MB
vector<int> decode(vector<int>& encoded, int first) {
	int n = encoded.size();
	vector<int> res(n + 1, first);

	for (int i = 0; i < n; i++)
	{
		res[i + 1] = res[i] ^ encoded[i];
	}

	return res;
}

// 24ms 26.5MB
vector<int> decode(vector<int>& encoded, int first) {
	int n = encoded.size();
	vector<int> res = { first };

	for (int i = 0; i < n; i++)
	{
		res.push_back(res[i] ^ encoded[i]);
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
