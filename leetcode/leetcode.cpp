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

// 38ms 21.7MB O(nlogn) O(n)
string shortestCompletingWord(string licensePlate, vector<string>& words) {
	unordered_map<char, int> mpl;
	for (auto ch : licensePlate)
	{
		if (islower(ch) || isupper(ch))
			mpl[tolower(ch)]++;
	}

	string res = "";
	int len = 16;
	for (auto &word : words)
	{
		bool containsAllLetter = true;
		unordered_map<char, int> mpw;
		for (auto ch : word)
		{
			mpw[ch]++;
		}

		for (auto& x : mpl)
		{
			if (mpw[x.first] < x.second)
			{
				containsAllLetter = false;
				break;
			}
		}

		
		if (containsAllLetter)
		{
			if (word.length() < len)
			{
				len = word.length();
				res = word;
			}
		}
	}

	return res;
}


// web 0ms real 13ms 11.9MB
string shortestCompletingWord(string licensePlate, vector<string>& words) {
	transform(licensePlate.begin(), licensePlate.end(), licensePlate.begin(), ::tolower);

	int u[26] = { 0 };
	string res;

	for (auto ch : licensePlate)
	{
		if (!isalpha(ch))
			continue;

		u[ch - 'a']++;
	}

	for(auto &word : words)
	{
		int v[26] = { 0 };
		for (auto ch : word)
			v[ch - 'a']++;

		bool containsAllLetter = true;
		for (int i = 0; i < 26; i++)
		{
			if (u[i] > v[i])
			{
				containsAllLetter = false;
				break;
			}
		}

		if (containsAllLetter)
		{
			if (res.length() == 0)
				res = word;
			else if (res.length() > word.length())
				res = word;
		}
	}

	return res;
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
