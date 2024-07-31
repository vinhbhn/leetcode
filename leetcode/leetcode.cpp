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


// O(n) O(n) 3ms 7.9MB
//vector<int> distributeCandies(int candies, int num_people) {
//	vector<int> ans(num_people, 0);
//
//	int give = 0, i = 0;
//	while (candies > give)
//	{
//		give++;
//		ans[i % num_people] += give;
//
//		i++;
//		candies -= give;
//	}
//	ans[i % num_people] += candies; // the rest of candies
//
//	return ans;
//}

// 0ms
vector<int> distributeCandies(int candies, int num_people) {
	vector<int> ans(num_people, 0);

	int i = 0;
	while (candies > 0)
	{
		if (candies < i + 1)
		{
			ans[i % num_people] += candies;
			candies = 0;
		}
		else
		{
			ans[i % num_people] += i + 1;
			candies -= i + 1;
		}

		i++;
	}

	return ans;
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
