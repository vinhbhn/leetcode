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

bool detectCapitalUse(string word) {
	int count = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (islower(word[i]))
			count++;
	}
	//		all upper		upper only first letter								all not capital		
	return (count == 0 || ((count == word.length() - 1) && isupper(word[0])) || count == word.length());
}


int main()
{
	cout << boolalpha;
	cout << detectCapitalUse("USA") << '\n';
	cout << detectCapitalUse("FlaG") << '\n';
	cout << detectCapitalUse("leetcode") << '\n';
	cout << detectCapitalUse("ffffffffffffffffffffF") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
