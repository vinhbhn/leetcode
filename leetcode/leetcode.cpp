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

// O(n) O(1) 6ms 20.2MB
int countTestedDevices(vector<int>& batteryPercentages) {
	// batteryPercentages - res (decrease) <= 0, move to the next
	int res = 0;
	for (int bP : batteryPercentages)
	{
		if (bP - res > 0)
			res++;
	}

	return res;
}

int main() {
	cout << boolalpha;
	vector<int> batteryPercentages = { 1, 1, 2, 1, 3 };
	cout << countTestedDevices(batteryPercentages) << '\n';

	batteryPercentages = { 0, 1, 2 };
	cout << countTestedDevices(batteryPercentages) << '\n';

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
