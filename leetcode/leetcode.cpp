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

// 3ms 10.5MB O(2^n) O(n)
string findDifferentBinaryString(vector<string>& nums) {
	int n = nums.size();

	int m = pow(2, n); // max, eg: with nums.size() = 3, so it has 2^3 possible string;
	// from bit_min = "000" to bit_max = "111" 

	for (int i = 0; i < m; i++)
	{
		bitset<16> b_temp(i);
		string temp = b_temp.to_string().substr(16 - n, n);
		if (find(nums.begin(), nums.end(), temp) == nums.end())
			return temp;
	}

	return "";
}

//https://leetcode.com/problems/find-unique-binary-string/solutions/4292653/beats-100-explained-with-video-simplest-solution-2-3-lines-visualized-too/?envType=daily-question&envId=2023-11-16
// 3ms 10.4MB O(n) O(n)
string findDifferentBinaryString(vector<string>& nums) {
	string result;

	for (int i = 0; i < nums.size(); i++)
	{
		result += (nums[i][i] == '0' ? '1' : '0');
	}

	return result;
}


int main() {
	cout << boolalpha;
	cout << countPalindromicSubsequence("aabca") << '\n';
	cout << countPalindromicSubsequence("bbcbaba") << '\n';
	cout << countPalindromicSubsequence("adc") << '\n';


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
