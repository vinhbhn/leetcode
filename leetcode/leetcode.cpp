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

// 3ms 6.2MB
//int totalMoney(int n) {
//	int count_day = 0, count_total_day = 0, total = 0, start = 1, raise_every_Monday = 1;
//	while (count_total_day != n)
//	{
//		total += start;
//		start++;
//		count_day++;
//		count_total_day++;
//		if (count_day == 7)
//		{
//			start = ++raise_every_Monday;
//			count_day = 0;
//		}
//	}
//
//	return total;
//
//}

// 3ms 6.2MB O(n)
int totalMoney(int n) {
	int countDay = 0, total = 0, start = 1;
	while (countDay != n)
	{
		total += start;
		start++;
		countDay++;
		if (countDay % 7 == 0)
		{
			start = (countDay / 7) + 1;
		}
	}

	return total;
}

// https://leetcode.com/problems/calculate-money-in-leetcode-bank/solutions/4367796/beats-100-c-java-python-js-explained-with-video-o-1-time-and-space/?envType=daily-question&envId=2023-12-06
// 0ms 6.5MB O(1)
int totalMoney(int n) {
	int week_count = n / 7;
	int remaining_days = n % 7;

	int total = ((week_count) * (week_count - 1) / 2) * 7; // contribution from complete weeks
	total += week_count * 28; // contribution form complete weeks (additional on Mondays)
	total += ((remaining_days * (remaining_days + 1)) / 2) + (week_count * remaining_days); // contribution from remaining days

	return total;
}


int main() {
	cout << boolalpha;
	cout << totalMoney(4) << '\n';
	cout << totalMoney(10) << '\n';
	cout << totalMoney(20) << '\n';


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
