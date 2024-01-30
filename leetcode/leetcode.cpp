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

// 0ms 7.5MB
string digitSum(string s, int k) {
	while (s.length() > k)
	{
		string newS = "";
		int step = 0, sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			sum += s[i] - '0';
			step++;

			if (step == k)
			{
				newS += to_string(sum);
				cout << newS << " ";
				sum = 0;
				step = 0;
			}
		}
		if (step != 0)
			newS += to_string(sum); // add rest of s
		cout << "new " << newS << '\n';


		s = newS;
	}

	return s;
}

int main() {
	cout << boolalpha;
	string s = "11111222223";
	int k = 3;

	cout << digitSum(s, k) << '\n';

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
