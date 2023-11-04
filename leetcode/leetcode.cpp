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

// 7ms 12.1MB O(3log3) O(1)
//int fillCups(vector<int>& a) {
//	int s = 0;
//
//	while (a[0] || a[1] || a[2])
//	{
//		sort(a.begin(), a.end());
//
//		if (a[2] > 0)
//		{
//			a[2]--;
//			if (a[1] > 0)
//				a[1]--;
//
//			s++;
//		}
//	}
//
//	return s;
//}

// web 11.6MB real 6ms 12MB
int fillCups(vector<int>& a) {
	int sum = a[0] + a[1] + a[2];
	int maxV = max(a[0], max(a[1], a[2]));
	return max(maxV, (sum + 1) / 2);
}

int main() {
	vector a = { 1,4,2 };
	cout << fillCups(a) << '\n';

	a = { 5,4,4 };
	cout << fillCups(a) << '\n';

	a = { 5,3,5 };
	cout << fillCups(a) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
