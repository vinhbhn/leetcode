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

// 3ms 6.6MB
//string reorderSpaces(string text) {
//	string temp = "";
//	int space = 0;
//	vector<string> v;
//	for (auto ch : text)
//	{
//		if (ch == ' ' && temp != "")
//		{
//			v.push_back(temp);
//			temp = "";
//			space++;
//		}
//		else if (ch == ' ')
//			space++;
//		else
//			temp += ch;
//	}
//	if (temp != "")
//		v.push_back(temp);
//
//	if (v.size() == 1)
//		return v[0] + string(space, ' ');
//
//	int count = space / (v.size() - 1), used = 0;
//	string res = "";
//	for (int i = 0; i < v.size() - 1; i++)
//	{
//		res += v[i] + string(count, ' ');
//		used += count;
//	}
//	// last word in text
//	res += v[v.size() - 1] + string(space - used, ' ');
//
//	return res;
//}

// 0ms, 6.7MB
string reorderSpaces(string text) {
	string temp = "";
	int space = 0;
	vector<string> v;
	for (auto &ch : text)
	{
		if (ch == ' ' && temp != "")
		{
			v.push_back(temp);
			temp = "";
			space++;
		}
		else if (ch == ' ')
			space++;
		else
			temp += ch;
	}
	if (temp != "")
		v.push_back(temp);

	if (v.size() == 1)
		return v[0] + string(space, ' ');

	int count = space / (v.size() - 1);
	temp = "";
	for (int i = 0; i < v.size() - 1; i++)
	{
		temp += v[i] + string(count, ' ');
		space -= count;
	}
	// last word in text
	temp += v[v.size() - 1] + string(space, ' ');

	return temp;
}

int main()
{
	cout << boolalpha;
	cout << reorderSpaces("  this   is  a sentence ") << '\n';
	cout << reorderSpaces(" practice   makes   perfect") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
