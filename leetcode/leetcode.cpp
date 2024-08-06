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

// O(N^2) O(1) 3ms 23.12MB
int countCompleteDayPairs(vector<int>& hours) {
	int count = 0;
	for (int i = 0; i < hours.size() - 1; i++)
	{
		for (int j = i + 1; j < hours.size(); j++)
		{
			if ((hours[i] + hours[j]) % 24 == 0)
				count++;
		}
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
