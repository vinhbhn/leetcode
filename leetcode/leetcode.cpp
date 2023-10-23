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

int prefixCount(vector<string>& words, string pref) {
	int count = 0;
	for (auto& word : words)
	{
		// prefix in a word
		if (word.substr(0, pref.length()) == pref)
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
