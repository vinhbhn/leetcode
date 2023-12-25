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

// 2ms 8.2MB
vector<string> cellsInRange(string s) {
	vector<string> res;
	string temp = "";
	for (auto startR = s[0]; startR <= s[3]; startR++)
	{
		for (auto startC = s[1]; startC <= s[4]; startC++)
		{
			temp += startR;
			temp += startC;
			res.push_back(temp);
			temp = "";
		}
	}

	return res;
}

// 3ms 8.1MB
vector<string> cellsInRange(string s) {
	vector<string> res;
	for (auto startR = s[0]; startR <= s[3]; startR++)
	{
		for (auto startC = s[1]; startC <= s[4]; startC++)
		{
			res.push_back(string() + startR + startC);
		}
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
