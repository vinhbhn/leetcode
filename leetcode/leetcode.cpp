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

// O(n*m) 6ms 41MB
int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
	int count = 0; // count good pair
	for (int i = 0; i < nums1.size(); i++)
	{
		for (int j = 0; j < nums2.size(); j++)
		{
			if (nums1[i] % (nums2[j] * k) == 0)
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
