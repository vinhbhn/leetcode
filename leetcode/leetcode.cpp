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

// 7ms 16.2MB O(NlogN) O(n)
//string restoreString(string s, vector<int>& indices) {
//	typedef pair<char, int> P;
//	vector<P> v;
//	int i = 0;
//	while (i < s.length())
//	{
//		v.push_back({ s[i], indices[i] });
//		i++;
//	}
//
//	auto cmp = [&](P& a, P& b)
//		{
//			return a.second < b.second;
//		};
//	sort(v.begin(), v.end(), cmp);
//
//	string res = "";
//	for (auto& x : v)
//		res += x.first;
//
//	return res;
//}

// web 0ms 15.6MB O(n) O(1)
string restoreString(string s, vector<int>& indices) {
	vector<char> temp(s.size(), ' ');
	for (int i = 0; i < indices.size(); i++)
	{
		temp[indices[i]] = s[i];
	}

	string res = "";
	for (auto& x : temp)
		res += x;

	return res;
}

int main()
{
	cout << boolalpha;
	vector nums = { 4,5,6,7,0,2,1,3 };
	cout << restoreString("codeleet", nums) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
