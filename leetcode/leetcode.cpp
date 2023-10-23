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

//bool check(string temp, string searchWord)
//{
//	int i = 0;
//	while (i < searchWord.length())
//	{
//		if (searchWord[i] != temp[i])
//			return false;
//
//		i++;
//	}
//
//	return true;
//}
int isPrefixOfWord(string sentence, string searchWord) {
	string temp = "";
	int whiteSpace = 0;
	for (auto ch : sentence)
	{
		if (ch == ' ')
		{
			whiteSpace++;
			if (searchWord == temp.substr(0, searchWord.length()))
				return whiteSpace;

			temp = "";
		}
		else
			temp += ch;
	}

	// last word of sentence
	return (searchWord == temp.substr(0, searchWord.length())) ? ++whiteSpace : -1;
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
