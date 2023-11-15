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

// 6ms 10.6MB O(n) O(logn)
vector<string> findRelativeRanks(vector<int>& score) {
	vector<string> res(score.size(), "");

	priority_queue<pair<int, int>> pq;
	for (int i = 0; i < score.size(); i++)
		pq.push({ score[i],i });

	int count = 0;
	while (!pq.empty())
	{
		count++;
		int i = pq.top().second;
		switch (count)
		{
		case 1: 
			res[i] = "Gold Medal";
			break;
		case 2:
			res[i] = "Silver Medal";
			break;
		case 3: 
			res[i] = "Bronze Medal";
			break;
		default:
			res[i] = to_string(count);
			break;
		}

		pq.pop();
	}

	return res;
}

int main() {
	cout << boolalpha;
	cout << countPalindromicSubsequence("aabca") << '\n';
	cout << countPalindromicSubsequence("bbcbaba") << '\n';
	cout << countPalindromicSubsequence("adc") << '\n';


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
