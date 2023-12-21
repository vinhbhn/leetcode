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

// 13ms 10.2MB O(n) O(n*m) n = sentences.size(), m = sentence.size()
int mostWordsFound(vector<string>& sentences) {
	int res = 0, whitespace = 0;
	for (auto& sentence : sentences)
	{
		whitespace = count(sentence.begin(), sentence.end(), ' ');
		res = max(res, whitespace);
	}

	return res + 1; // whitespace 
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
