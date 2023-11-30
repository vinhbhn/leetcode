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

// 3ms 6.5MB
int numJewelsInStones(string jewels, string stones) {
	int count = 0;
	for (auto ch : stones)
	{
		if (jewels.find(ch) != string::npos)
			count++;
	}

	return count;
}

// 2ms 6.7MB
int numJewelsInStones(string jewels, string stones) {
	unordered_set<char> jS(jewels.begin(), jewels.end());
	int count = 0;
	for (auto stone : stones)
	{
		if (jS.contains(stone))
			count++;
	}

	return count;
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
