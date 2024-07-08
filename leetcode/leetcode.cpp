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

//https://en.wikipedia.org/wiki/Josephus_problem#The_general_case
// O(n) O(n) 0ms 7.1MB
//int findTheWinner(int n, int k) {
//	if (n == 1)
//		return 1;
//
//	return ((findTheWinner(n - 1, k) + k - 1) % n) + 1;
//}

// https://leetcode.com/problems/find-the-winner-of-the-circular-game/solutions/5438775/explanations-no-one-will-give-you-3-detailed-approaches-extremely-simple-and-effective/?envType=daily-question&envId=2024-07-08
// O(N^2) O(N)
int findTheWinner(int n, int k) {
	vector<int> circle;
	for (int i = 1; i <= n; i++)
	{
		circle.push_back(i);
	}

	int cur_ind = 0;
	while (circle.size() > 1)
	{
		int next_to_remove = (cur_ind + k - 1) % circle.size();
		circle.erase(circle.begin() + next_to_remove);
		cur_ind = next_to_remove;
	}

	return circle[0];
}

int main() {
	cout << boolalpha;

	cout << findTheWinner(5, 2) << '\n';
	cout << findTheWinner(6, 5) << '\n';


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
