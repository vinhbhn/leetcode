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

// 83ms 12.4MB O(m*n) O(m*n)
int minDeletionSize(vector<string>& strs) {
	int count = 0;
	for (int j = 0; j < strs[0].size(); j++)
	{
		bool flag = false;
		for (int i = 1; i < strs.size(); i++)
		{
			if (strs[i][j] < strs[i - 1][j])
				flag = true;
		}

		if (flag)
			count++;
	}

	return count;
}

// 36ms 12.8MB
int minDeletionSize(vector<string>& strs) {
	int count = 0;
	for (int j = 0; j < strs[0].size(); j++)
	{
		for (int i = 1; i < strs.size(); i++)
		{
			if (strs[i][j] < strs[i - 1][j])
			{
				count++;
				break;
			}
		}
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
