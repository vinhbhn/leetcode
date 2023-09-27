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

//int firstUniqChar(std::string s) {
//	std::unordered_map<char, int> mp;
//	int pos = s.length() - 1;
//	bool haveUniqueChar = false;
//	for (auto &ch : s)
//		mp[ch]++;
//
//	for (auto &x : mp)
//	{
//		if (x.second == 1)
//		{
//			haveUniqueChar = true;
//			if (pos > s.find(x.first))
//				pos = s.find(x.first);
//		}
//	}
//
//	if (haveUniqueChar)
//		return pos;
//
//	return -1;
//}

//int firstUniqChar(std::string s) {
//	std::unordered_map<char, int> mp;
//	for (auto& ch : s)
//		mp[ch]++;
//
//	for (int i = 0; i < s.length(); i++)
//		if (mp.find(s[i])->second == 1)
//			return i;
//
//	return -1;
//}

//https://leetcode.com/problems/first-unique-character-in-a-string/solutions/2976235/easy-c-solution-basic-approach-array-loop/
// O(n) O(n)
int firstUniqChar(std::string s) {
	/*std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);*/

	int arr[26] = { 0 };

	// arr = {'a' -> 'z'};
	for (int i = 0; i < s.length(); i++)
		arr[s[i] - 'a']++;

	for (int i = 0; i < s.length(); i++)
		if (arr[s[i] - 'a'] == 1)
			return i;

	return -1;
}


int main()
{
	std::string s = "leetcode";
	std::cout << firstUniqChar(s) << '\n';

	s = "loveleetcode";
	std::cout << firstUniqChar(s) << '\n';

	s = "aabb";
	std::cout << firstUniqChar(s) << '\n';


	return 0;
}

