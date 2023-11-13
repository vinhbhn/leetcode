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

// 3ms 8.7MB O(n) O(n)
int calPoints(vector<string>& operations) {
	vector<int> v;
	for (auto& ch : operations)
	{
		if (ch == "C")
		{
			if (!v.empty())
				v.pop_back();
		}
		else if (ch == "D")
		{
			int temp = v.back();
			v.push_back(2 * temp);
		}
		else if (ch == "+")
		{
			if (v.size() >= 2)
				v.push_back(v[v.size() - 1] + v[v.size() - 2]);
			else
				v.push_back(v[0]);
		}
		else
			v.push_back(stoi(ch));
	}

	return accumulate(v.begin(), v.end(), 0);
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
