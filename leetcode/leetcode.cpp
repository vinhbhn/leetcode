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

// 0ms 6.5MB 
string reversePrefix(string word, char ch) {
	int pos = word.find(ch);

	if (pos != string::npos)
	{
		int i = 0;
		while (i <= pos)
		{
			swap(word[i], word[pos]);

			i++;
			pos--;
		}
	}

	return word;
}

string reversePrefix(string word, char ch) {
	int pos = word.find(ch);

	if (pos != string::npos)
	{
		reverse(word.begin(), word.begin() + pos + 1);
	}

	return word;
}


int main() {
	cout << boolalpha;
	vector<vector<int>> mat = { {1,0,0}, {0,0,1}, {1,0,0} };
	cout << numSpecial(mat) << '\n';

	mat = { {1,0,0}, {0,1,0}, {0,0,1} };
	cout << numSpecial(mat) << '\n';

	mat = { {0,0}, {0,0}, {1,0} };
	cout << numSpecial(mat) << '\n';

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
