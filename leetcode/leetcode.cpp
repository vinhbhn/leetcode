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

// 40/41 too long, overthinking a simple question
int findLUSlength(string a, string b) {
	vector<int> av(26, 0), bv(26, 0);
	int count = 0;

	for (auto ch : a)
		av[ch - 'a']++;
	for (auto ch : b)
		bv[ch - 'a']++;

	for (int i = 0; i < 26; i++)
	{
		if (av[i] > bv[i])
		{
			av[i] -= bv[i];
			bv[i] = 0;
		}
		else if (av[i] < bv[i])
		{
			bv[i] -= av[i];
			av[i] = 0;
		}
		else
		{
			av[i] = 0;
			bv[i] = 0;
		}

		if (av[i] == 0 && bv[i] == 0)
			count++;
	}
	if (count == 26) // if a = b == ""
		return -1;

	int ac = accumulate(av.begin(), av.end(), 0);
	int bc = accumulate(bv.begin(), bv.end(), 0);

	return (ac <= bc) ? b.length() : a.length();
}

// 3ms 6.5MB
int findLUSlength(string a, string b) {
	if (a == b)
		return -1;

	return max(a.length(), b.length());
}

int main() {
	cout << boolalpha;


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
