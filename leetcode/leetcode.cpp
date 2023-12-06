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

// 6ms 7.7MB 
int canBeTypedWords(string text, string brokenLetters) {
	vector<string> t;
	stringstream ss(text);
	string word;
	while (getline(ss, word, ' '))
		t.push_back(word);

	int count = 0;
	for (auto& te : t)
	{
		bool fail = false;
		for (char brokenKey : brokenLetters)
		{
			if (te.find(brokenKey) != string::npos)
			{
				fail = true;
				break;
			}
		}

		if (!fail)
			count++;
	}

	return count;
}

// web 0ms real 2ms 7.1MB
int canBeTypedWords(string text, string brokenLetters) {
	int count = 0;
	unordered_set<char> brokenKey;
	for (auto& key : brokenLetters)
		brokenKey.insert(key);

	bool hasBrokenKey = false;
	text += ' ';
	for (auto& ch : text)
	{
		if (ch != ' ' && brokenKey.contains(ch))
			hasBrokenKey = true;
		else if (ch == ' ')
		{
			if (!hasBrokenKey)
				count++;
			else
				hasBrokenKey = false;
		}
	}

	return count;
}


int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
