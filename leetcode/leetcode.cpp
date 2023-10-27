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

int percentageLetter(string s, char letter) {
	int count = 0;
	for (auto& ch : s)
		if (ch == letter)
			count++;

	return (count * 100 / s.size());
}

int main()
{
	cout << boolalpha;
	cout << frequencySort("tree") << '\n';
	cout << frequencySort("cccaaa") << '\n';
	cout << frequencySort("Aabb") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
