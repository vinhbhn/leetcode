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

// 7ms 29.1MB
vector<int> findWordsContaining(vector<string>& words, char x) {
	vector<int> res;
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i].find(x) != string::npos)
			res.push_back(i);
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
/*
int init = [] {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ofstream out("user.out");
	cout.rdbuf(out.rdbuf());
	for (string line; getline(cin, line); cout << '\n') {
		istringstream ss(line);
		char ch;
		int a, b, c, d;
		ss >> ch >> ch >> a >> ch >> b >> ch >> ch >> ch >> c >> ch >> d;
		if (a == c || a == d) cout << a;
		else cout << b;
	}
	exit(0);
	return 0;
}();
*/
