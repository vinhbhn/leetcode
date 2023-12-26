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

// 44ms 30.2MB
int countConsistentStrings(string allowed, vector<string>& words) {
	int count = 0;
	for (auto& word : words)
	{
		bool contain = true;
		for (auto ch : word)
		{
			if (allowed.find(ch) == string::npos)
			{
				contain = false;
				break;
			}
		}

		if (contain)
			count++;
	}

	return count;
}

// web 27ms real 50ms 30.4MB
int countConsistentStrings(string allowed, vector<string>& words) {
	bool hash[26] = {};
	for (int i = 0; i < allowed.size(); i++)
	{
		hash[allowed[i] - 'a'] = true;
	}

	int count = 0;
	for (auto& word : words)
	{
		bool contain = true;
		for (auto ch : word)
		{
			if (!hash[ch - 'a'])
			{
				contain = false;
				break;
			}
		}

		if (contain)
			count++;
	}

	return count;
}

int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
