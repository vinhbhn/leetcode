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

// 0ms 9.4MB O(n) O(1)
vector<int> diStringMatch(string s) {
	vector<int> p;
	int i = 0, d = s.size();
	s += s[0];
	for (auto ch : s)
	{
		if (ch == 'I')
			p.push_back(i++);
		else
			p.push_back(d--);
	}

	return p;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
