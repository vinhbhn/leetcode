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

vector<int> getConcatenation(vector<int>& nums) {
	vector<int> res = nums;
	res.insert(res.begin(), nums.begin(), nums.end());
	return res;
}

int main()
{
	cout << boolalpha;
	cout << numberOfMatches(7) << '\n';
	cout << numberOfMatches(14) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
