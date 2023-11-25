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

// 0ms 6.2MB
int divisorSubstrings(int num, int k) {
	string numStr = to_string(num);

	int i = 0, count = 0;
	while (i + k <= numStr.length())
	{
		string temp = numStr.substr(i, k);

		int numT = stoi(temp);

		if (numT != 0)
			if (num % numT == 0)
				count++;

		i++;
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
