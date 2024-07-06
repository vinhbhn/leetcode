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

// O(n) O(1) n==time, 2ms 7MB
//int passThePillow(int n, int time) {
//	// range from 1 to n
//	// maintain direction variable and index variable
//	// while time is positive, update current index with current direction
//	// if the index reach the end of the line, multiply direction by -1.
//
//	int i = 1, direction = 1;
//	while (time)
//	{
//		i += direction;
//
//		// reverse the direction if the next position is out of bounds
//		if (i == n || i == 1)
//			direction = -direction;
//
//		time--;
//	}
//
//	return i;
//}

// https://leetcode.com/problems/pass-the-pillow/solutions/5424192/o-1-mod-2n-2-c-2-line-python-1-line/?envType=daily-question&envId=2024-07-06
// O(1) O(1) 
int passThePillow(int n, int time) {
	int N = 2 * n - 2;
	int x = time % N;
	return 1 + ((x < n) ? x : N - x);
}

int main() {
	cout << boolalpha;

	cout << passThePillow(4, 5) << '\n';
	cout << passThePillow(3, 2) << '\n';

	cout << passThePillow(4, 8) << '\n';



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
