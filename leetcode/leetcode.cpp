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

// 230ms 116.6MB O(n) O(n)
int distributeCandies(vector<int>& candyType) {
	unordered_set<int> st;
	for (auto candy : candyType)
		st.insert(candy);

	return (candyType.size() / 2 > st.size()) ? st.size() : candyType.size() / 2;
}

// web 52ms real 66ms 81.9MB
int distributeCandies(vector<int>& candyType) {
	bitset<200001> bitset;

	for (const int candy : candyType)
		bitset.set(candy + 100000);

	return min(candyType.size() / 2, bitset.count());
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
