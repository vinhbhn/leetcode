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

string mergeAlternately(string word1, string word2) {
	string res = "";
	int i = 0, j = 0;
	while (i < word1.size() || j < word2.size())
	{
		if (i < word1.size())
			res += word1[i++];

		if (j < word2.size())
			res += word2[j++];
	}

	return res;
}

int main()
{
	cout << boolalpha;
	cout << maximum69Number(9669) << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
