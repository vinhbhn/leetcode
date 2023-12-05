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

// 6ms 7.5MB O(k+m) O(1)
//string decodeMessage(string key, string message) {
//	// map the first appearance of all 26 lowercase letters in key to character
//	unordered_map<char, char> mp;
//	char character = 'a';
//	for (auto ch : key)
//	{
//		if (ch != ' ' && !mp.contains(ch))
//		{
//			mp[ch] = character;
//			character++;
//		}
//	}
//
//	// decode with constructed map
//	string res = "";
//	for (auto ch : message)
//	{
//		if (ch != ' ')
//		{
//			res += mp[ch];
//		}
//		else
//			res += ' ';
//	}
//
//	return res;
//}

// web 0ms real 5ms 7.3MB
string decodeMessage(string key, string message) {
	// map the first appearance of all 26 lowercase letters in key to table
	string table = "";
	for (auto ch : key)
	{
		if (ch != ' ' && table.find(ch) == string::npos)
		{
			table += ch;
		}
	}

	// decode with constructed map
	string res = "";
	for (auto ch : message)
	{
		if (ch != ' ')
		{
			auto index = table.find(ch);
			res += index + 'a';
		}
		else
			res += ' ';
	}

	return res;
}

// web 0ms real 3ms 7.2MB
string decodeMessage(string key, string message) {
	// map the first appearance of all 26 lowercase letters in key to table
	string table = "";
	for (int i = 0; i < key.size(); i++)
	{
		if (key[i] != ' ' && table.find(key[i]) == string::npos)
		{
			table += key[i];
		}
	}

	// decode with constructed map
	string res = "";
	for (int i = 0; i < message.size(); i++)
	{
		if (message[i] != ' ')
		{
			res += table.find(message[i]) + 'a'; // index + 'a'
		}
		else
			res += " ";
	}

	return res;
}

int main() {
	cout << boolalpha;
	string key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
	cout << decodeMessage(key, message) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
