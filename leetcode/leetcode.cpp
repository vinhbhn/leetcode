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

// 128/134 
vector<string> split(string str, char delimiter)
{
	stringstream ss(str);
	vector<string> res;
	string word;
	while (getline(ss, word, delimiter))
		res.push_back(word);

	return res;
}
bool areSentencesSimilar(string sentence1, string sentence2) {
	vector<string> s1 = split(sentence1, ' ');
	vector<string> s2 = split(sentence2, ' ');

	if (s1[0] == s2[0])
	{
		s1.begin() = s1.erase(s1.begin());
		s2.begin() = s2.erase(s2.begin());
	}
	else
		return false;

	if (!s1.empty() && !s2.empty())
		if (*s1.crbegin() != *s2.crbegin())
			return false;

	return true;
}

// https://leetcode.com/problems/sentence-similarity-iii/solutions/1140673/simple-cpp-solution/
// 4ms 7MB
vector<string> split(string str, char delimiter)
{
	stringstream ss(str);
	vector<string> res;
	string word;
	while (getline(ss, word, delimiter))
		res.push_back(word);

	return res;
}
bool areSentencesSimilar(string sentence1, string sentence2) {
	vector<string> s1 = split(sentence1, ' ');
	vector<string> s2 = split(sentence2, ' ');

	int start1 = 0, start2 = 0, end1 = s1.size() - 1, end2 = s2.size() - 1;
	while (start1 <= end1 && start2 <= end2)
	{
		if (s1[start1] == s2[start2]) // if start of both vectors are equal
		{
			start1++;
			start2++;
		}
		else if (s1[end1] == s2[end2]) // if end of both vectors are equal
		{
			end1--;
			end2--;
		}
		else
			return false;
	}

	return true;
}

// https://leetcode.com/problems/sentence-similarity-iii/solutions/1145427/easy-c-explanation-deque/
// 0ms 7.2MB
bool areSentencesSimilar(string sentence1, string sentence2)
{
	deque<string> a, b;
	sentence1 += ' ', sentence2 += ' ';
	string temp = "";
	for (auto ch : sentence1)
	{
		if (ch == ' ')
		{
			a.push_back(temp);
			temp = "";
		}
		else
			temp += ch;
	}

	temp = "";
	for (auto ch : sentence2)
	{
		if (ch == ' ')
		{
			b.push_back(temp);
			temp = "";
		}
		else
			temp += ch;
	}

	while (!a.empty() && !b.empty() && (a.front() == b.front()))
		a.pop_front(), b.pop_front();

	while (!a.empty() && !b.empty() && (a.back() == b.back()))
		a.pop_back(), b.pop_back();

	return (a.empty() || b.empty()); // if one of these empty mean the one is similar of another
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
