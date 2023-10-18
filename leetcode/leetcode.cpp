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

//int minimumRecolors(string blocks, int k) {
//	string temp(k, 'B');
//	vector<int> v;
//
//	if (search(blocks.begin(), blocks.end(), temp.begin(), temp.end()) == blocks.end())
//	{
//		// have blocks.size() == k
//		for (int i = 0; i <= blocks.size() - k; i++)
//		{
//			int a = i;
//			int count = 0;
//			for (int j = 0; j < temp.size();)
//			{
//				if (temp[j++] != blocks[a++])
//					count++;
//			}
//			v.push_back(count);
//		}
//	}
//
//	if (!v.empty())
//		return *min_element(v.begin(), v.end());
//
//	// if 'B' have adjacent and size equal k
//	return 0;
//}

//https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/solutions/2454159/c-using-sliding-window-very-simple-and-easy-to-understand-solution/
int minimumRecolors(string blocks, int k) {
    int back = 0, front = 0, count_w = 0, ans = INT_MAX;
    while (front < blocks.size()) {
        if (blocks[front] == 'W') { count_w++; }
        if (front - back + 1 == k) {
            ans = min(ans, count_w);
            if (blocks[back] == 'W') count_w--;
            back++;
        }
        front++;
    }
    return ans;
}

int main()
{
	cout << minimumRecolors("WBBWWBBWBW", 7) << '\n';
	cout << minimumRecolors("WBWBBBW", 2) << '\n';
	cout << minimumRecolors("BWWWBB", 6) << '\n';


	return 0;
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
