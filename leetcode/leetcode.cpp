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

// 17ms 32.1MB O((vowel.size())^(right-left)) O(n)
//int vowelStrings(vector<string>& words, int left, int right) {
//	int count = 0;
//	string vowels = "aeiou";
//	for (int i  = left; i <= right; i++)
//	{
//		bool start = false, end = false;
//		for (auto ch : vowels)
//		{
//			if (ch == words[i][0])
//				start = true;
//
//			if (ch == words[i][words[i].size() - 1])
//				end = true;
//
//			if (start && end)
//			{
//				count++;
//				break;
//			}
//		}
//	}
//
//	return count;
//}

// 11ms 31.8MB
bool isVowel(char ch)
{
	return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');
}
int vowelStrings(vector<string>& words, int left, int right) {
	int count = 0;
	for (int i = left; i <= right; i++)
	{
		if (isVowel(words[i][0]) && isVowel(words[i][words[i].size() - 1]))
			count++;
	}

	return count;
}

int main() {
	cout << boolalpha;

	vector nums = { 3,4,5,1,2 };
	cout << check(nums) << '\n';

	nums = { 2,1,3,4 };
	cout << check(nums) << '\n';

	nums = { 1,2,3 };
	cout << check(nums) << '\n';

	nums = { 6,10,6 };
	cout << check(nums) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
