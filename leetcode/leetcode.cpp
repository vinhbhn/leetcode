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

// 0ms 9.1MB O(n*m) O(1) n = words.size(), m = words[i].size()
int uniqueMorseRepresentations(vector<string>& words) {
	vector<string> v = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",
		".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

	unordered_set<string> st;
	for (auto& w : words)
	{
		string temp = "";
		for (auto ch : w)
		{
			temp += v[ch - 'a'];
		}

		st.insert(temp);
	}

	return st.size();
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
