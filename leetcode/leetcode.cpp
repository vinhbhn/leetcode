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

bool isPrefixString(string s, vector<string>& words) {
    string temp = "";
    for (int i = 0; i < words.size(); i++)
    {
        temp += words[i];
        if (temp == s)
            return true;
    }

    return false;
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
