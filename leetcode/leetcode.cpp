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

// 0ms 6.2MB
int commonFactors(int a, int b) {
	int count = 0;
	// count divisible by both A and B from 1 to 1000
	for (int i = 1; i <= 1000; i++)
	{
		if ((a % i == 0) && (b % i == 0))
			count++;
	}

	// duplicate because from 1 to 1000 have a and b
	if (a == b)
		count--;

	return (b % a == 0) ? count + 1 : count;
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
