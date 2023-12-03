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

// 3ms 8MB
bool isCircularSentence(string sentence) {
	sentence += ' ';
	string temp = "";
	vector<string> v;

	for (auto ch : sentence)
	{
		if (ch == ' ')
		{
			v.push_back(temp);
			temp = "";
		}
		else
			temp += ch;
	}

	char first = v[0][0];
	char last = v[0][v[0].length() - 1];

	for (int i = 1; i < v.size(); i++)
	{
		if (last != v[i][0])
			return false;
		else
			last = v[i][v[i].length() - 1];
	}

	return (first == last); // last char in the last letter and first char in the first letter
}

// 3ms 8MB
bool isCircularSentence(string sentence) {
	sentence += ' ';
	string temp = "";
	vector<string> v;

	for (auto ch : sentence)
	{
		if (ch == ' ')
		{
			v.push_back(temp);
			temp = "";
		}
		else
			temp += ch;
	}

	string curr = v[0];
	char first = curr[0];
	char last = curr[curr.length() - 1];

	for (int i = 1; i < v.size(); i++)
	{
		curr = v[i];
		if (last != curr[0]) // the last character of a word is equal to the first character of the next word.
			return false;
		else
			last = curr[curr.length() - 1];

	}

	return (first == last); // the last character of the last word is equal to the first character of the first word.
}

// web 0ms real 0ms 7MB
bool isCircularSentence(string sentence) {
	int n = sentence.length();
	if (sentence[0] != sentence[n - 1])
		return false;
	for (int i = 0; i < n; i++)
	{
		if (sentence[i] == ' ' && (sentence[i - 1] != sentence[i + 1]))
			return false;
	}

	return true;
}

int main() {
	cout << boolalpha;
	string pattern = "abba", s = "dog cat cat dog";
	cout << wordPattern(pattern, s) << '\n';

	pattern = "abba", s = "dog dog dog dog";
	cout << wordPattern(pattern, s) << '\n';

	pattern = "aba", s = "cat cat cat dog";
	cout << wordPattern(pattern, s) << '\n';


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
