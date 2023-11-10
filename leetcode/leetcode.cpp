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

// 3ms 6.7MB O(m+n) O(1) m = s1.size(), n = s2.size() 
bool areAlmostEqual(string s1, string s2) {
	int count = 0;
	vector<int> v1(26, 0);
	vector<int> v2(26, 0);
	for (int i = 0; i < s1.size(); i++)
	{
		v1[s1[i] - 'a']++;
		v2[s2[i] - 'a']++;

		if (s1[i] != s2[i])
			count++;
	}

	if (count == 0 || count == 2)
	{
		for (int i = 0; i < v1.size(); i++)
		{
			if (v1[i] != v2[i])
				return false;
		}

		return true;
	}

	return false;
}

int main() {
	cout << boolalpha;

	// aa bb
	// caa aaz

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
