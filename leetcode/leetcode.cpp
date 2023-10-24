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

vector<string> findOcurrences(string text, string first, string second) {
	vector<string> words, res;
	stringstream ss(text);
	string word;
	while (getline(ss, word, ' '))
		words.push_back(word);

	for (string::size_type i = 0; i < words.size() - 2; i++)
	{
		if ((words[i] == first) && (words[i + 1] == second))
		{
			// third
			res.push_back(words[i + 2]);
		}
	}

	return res;
}

int main()
{
	cout << boolalpha;

	for (auto& a : findOcurrences("alice is a good girl she is a good student", "a", "good"))
		cout << a << ' ';
	cout << '\n';

	for (auto& a : findOcurrences("we will we will rock you", "we", "will"))
		cout << a << ' ';
	cout << '\n';

	for (auto& a : findOcurrences("jkypmsxd jkypmsxd kcyxdfnoa jkypmsxd kcyxdfnoa jkypmsxd kcyxdfnoa kcyxdfnoa jkypmsxd kcyxdfnoa", "kcyxdfnoa", "jkypmsxd"))
		cout << a << ' ';
	cout << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
