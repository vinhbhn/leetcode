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

// https://leetcode.com/problems/knight-dialer/solutions/4333888/beats-100-explained-with-video-memorization-visualized-too/?envType=daily-question&envId=2023-11-27
//41ms 8.5MB O(n*10) O(n*10)
class Solution {
public:
    static const int mod = 1e9 + 7;
    vector<vector<int>> MOVES = {
    {4, 6},
    {8, 6},
    {7, 9},
    {4, 8},
    {3, 9, 0},
    {},
    {0, 1, 7},
    {2, 6},
    {1, 3},
    {2, 4},
    };

    int cache[5001][10];

    int knightDialer(int n) {
        vector<int> nextNumbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        return knightDialer(n, nextNumbers);
    }

    int knightDialer(int remaining, vector<int>& nextNumbers) {
        if (remaining == 1)
            return nextNumbers.size();

        int count = 0;
        for (int nextNumber : nextNumbers) {
            int cur = cache[remaining][nextNumber];
            if (cur == 0) {
                cur = knightDialer(remaining - 1, MOVES[nextNumber]);
                cache[remaining][nextNumber] = cur;
            }
            count += cur;
            count %= mod;
        }
        return count;
    }
};

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
