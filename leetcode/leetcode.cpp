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

//https://leetcode.com/problems/detect-pattern-of-length-m-repeated-k-or-more-times/solutions/819361/simple-c-solution-0ms-100-fast/
// 0ms 8.4MB 
bool containsPattern(vector<int>& arr, int m, int k) {
	int count = 0;
	for (int i = 0; i + m < arr.size(); i++)
	{
		if (arr[i] != arr[i + m])
			count = 0;

		count += (arr[i] == arr[i + m]);
		if (count == (k - 1) * m)
			return true;
	}

	return false;
}


int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
