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

int countPrefixes(vector<string>& words, string s) {
	int count = 0;
	for (auto& word : words)
	{
		// check word if it is prefix in s
		if (s.substr(0, word.length()) == word)
			count++;
	}

	return count;
}

int main()
{
	cout << boolalpha;
	cout << isPrefixOfWord("i love eating burger", "burg") << '\n';
	cout << isPrefixOfWord("this problem is an easy problem", "pro") << '\n';
	cout << isPrefixOfWord("i am tired", "you") << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
