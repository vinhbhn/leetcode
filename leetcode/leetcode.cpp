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

// O(n) 0ms 13.5MB
int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
	int count = 0;
	for (int i = 0; i < startTime.size(); i++)
	{
		// form an interval: queryTime in [startTime(i), endTime(i)]
		if (startTime[i] <= queryTime && queryTime <= endTime[i])
			count++;
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
