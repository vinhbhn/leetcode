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

// worked but slow 69ms O(n^3)
//int countTriples(int n) {
//    int count = 0;
//    for (int a = 3; a < n; a++)
//    {
//        for (int b = a + 1; b < n; b++)
//        {
//            for (int c = b + 1; c <= n; c++)
//            {
//                if (a * a + b * b == c * c)
//                    count++;
//            }
//        }
//    }
//
//    // a <-> b
//    return count * 2;
//}

// https://leetcode.com/problems/count-square-sum-triples/solutions/1329929/c-brute-force-vs-logarithmic-solution-100-time-100-space/
// 10ms
//int countTriples(int n) {
//	int count = 0;
//	for (int a = 3; a < n; a++)
//	{
//		for (int b = 3; b < n; b++)
//		{
//			int sqc = a * a + b * b;
//			int c = sqrt(sqc);
//			if (c * c == sqc && c <= n)
//				count++;
//		}
//	}
//
//	return count;
//}
// optimize than above: 0ms
int countTriples(int n) {
    int res = 0;
    for (int a = 3; a < n; a++) {
        for (int b = a + 1, sqc, c; b < n; b++) {
            sqc = a * a + b * b;
            c = sqrt(sqc);
            if (c > n) break;
            res += (c * c == sqc) << 1;
        }
    }
    return res;
}

int main()
{
	cout << boolalpha;

	cout << countTriples(5) << '\n';
	cout << countTriples(10) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
