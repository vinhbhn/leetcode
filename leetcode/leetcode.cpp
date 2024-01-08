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

// 43ms 23.5MB O(words.size() * s.size())
bool isPalindrome(string s)
{
	return equal(s.cbegin(), s.cbegin() + s.size() / 2, s.crbegin());
}
string firstPalindrome(vector<string>& words) {
	for (auto& word : words)
		if (isPalindrome(word))
			return word;

	return "";
}

// 39ms 23.3MB
string firstPalindrome(vector<string>& words) {
	for (auto& word : words)
		if (isPalindrome(word))
			return word;

	return "";
}
string firstPalindrome(vector<string>& words) {
	for (auto& word : words)
		if (isPalindrome(word))
			return word;

	return "";
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
