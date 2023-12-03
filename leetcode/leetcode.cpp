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

// 0ms 8.9MB
vector<int> decrypt(vector<int>& code, int k) {
	int n = code.size();
	vector<int> temp = code, res(n, 0);

	// 5ms 8.8MB
	/*temp.resize(2 * n);
	for (int i = n; i < 2 * n; i++)
		temp[i] = temp[i - n];*/
		// replace by this
	temp.insert(temp.end(), temp.begin(), temp.end());

	if (k == 0)
		return res;
	else if (k > 0)
	{
		for (int i = 0; i < n; i++)
			res[i] = accumulate(temp.begin() + i + 1, temp.begin() + i + 1 + k, 0);
	}
	else if (k < 0)
	{
		for (int i = 0; i < n; i++)
			res[i] = accumulate(temp.begin() + i + n + k, temp.begin() + i + n, 0);
	}

	return res;
}

// https://leetcode.com/problems/defuse-the-bomb/solutions/3367476/defuse-the-bomb-solution-in-c/
// 0ms 8.8MB
vector<int> decrypt(vector<int>& code, int k) {
	int n = code.size();
	vector<int> res(n, 0);
	for (int i = 0; i < n; i++)
	{
		int sum = 0, m = abs(k), j = i;
		while (m--)
		{
			if (k < 0)
			{
				j--;
				if (j < 0)
					j += n;
				sum += code[j];
			}
			else if (k > 0)
			{
				j++;
				if (j >= n)
					j -= n;
				sum += code[j];
			}
		}
		res[i] = sum;
	}

	return res;
}

int main() {
	cout << boolalpha;
	vector<int> code = { 5,7,1,4 };
	int k = 3;
	for (auto& x : decrypt(code, k))
		cout << x << ' ';
	cout << '\n';

	code = { 5,7,1,4 };
	k = 0;
	for (auto& x : decrypt(code, k))
		cout << x << ' ';
	cout << '\n';

	code = { 2,4,9,3 };
	k = -2;
	for (auto& x : decrypt(code, k))
		cout << x << ' ';
	cout << '\n';

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
