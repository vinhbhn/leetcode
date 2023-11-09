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

// 6ms 18.4MB O(nlogn + n) O(logn)
int minMovesToSeat(vector<int>& seats, vector<int>& students) {
	sort(seats.begin(), seats.end());
	sort(students.begin(), students.end());

	int res = 0;
	for (int i = 0; i < seats.size(); i++)
	{
		res += abs(seats[i] - students[i]);
	}

	return res;
}

int main() {
	cout << boolalpha;

	vector nums = { 6,5,7,9,2,2 };
	cout << minimumCost(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
