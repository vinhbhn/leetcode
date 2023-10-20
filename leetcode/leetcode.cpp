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

int countWords(vector<string>& words1, vector<string>& words2) {
	unordered_map<string, int> mp1, mp2;
	for (auto &word : words1)
		mp1[word]++;

	for (auto& word : words2)
		mp2[word]++;

	int count = 0;
	for (auto& x : mp1)
	{
		// string appear exactly once in each of the two arrays
		if (x.second == 1 && mp2[x.first] == 1)
			count++;
	}

	return count;
}

int main()
{
	cout << boolalpha;

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
