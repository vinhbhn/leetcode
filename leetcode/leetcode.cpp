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

// O(logN) O(1) N = numBottle, 3ms 7.2MB
int numWaterBottles(int numBottles, int numExchange) {
	int numEmptyBottle = numBottles;

	while (numEmptyBottle >= numExchange)
	{
		numBottles += numEmptyBottle / numExchange;

															// rest
		numEmptyBottle = (numEmptyBottle / numExchange) + numEmptyBottle % numExchange;
	}

	return numBottles;
}

int main() {
	cout << boolalpha;

	cout << numWaterBottles(9, 3) << '\n';
	cout << numWaterBottles(15, 4) << '\n';

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
