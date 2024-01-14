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

// 91ms 79.6MB
vector<int> findArray(vector<int>& pref) {
	vector<int> res = { pref[0] };

	for (int i = 1; i < pref.size(); i++)
	{
		res.push_back(pref[i] ^ pref[i - 1]);
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
