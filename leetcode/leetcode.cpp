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

// 4ms 7MB
bool checkIfPangram(string sentence) {
	vector<bool> alpha(26, false);
	for (auto ch : sentence)
		alpha[ch - 'a'] = true;

	for (int i = 0; i < alpha.size(); i++)
	{
		if (alpha[i] == false)
			return false;
	}

	return true;
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
