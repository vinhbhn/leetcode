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

// 0ms 7.3MB 
vector<int> sequentialDigits(int low, int high) {
	vector<int> res;
	string d = "123456789";

	int ls = to_string(low).size(), hs = to_string(high).size();

	for (int k = ls; k <= hs; k++)
	{
		// because substr take [i, k) 
		for (int i = 0; i + k <= d.size(); i++)
		{
			int temp = stoi(d.substr(i, k));

			if (low <= temp and temp <= high)
				res.push_back(temp);
		}
	}

	return res;
}

int main() {
	cout << boolalpha;

	int low = 100, high = 300;
	for (auto& x : sequentialDigits(low, high))
		cout << x << ' ';
	cout << '\n';
	cout << '\n';

	int lows = 1000, highs = 13000;
	for (auto& x : sequentialDigits(lows, highs))
		cout << x << ' ';
	cout << '\n';


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
