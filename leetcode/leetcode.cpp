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

// https://leetcode.com/problems/destination-city/solutions/1192311/c-easy-two-methods-map-set/
//string destCity(vector<vector<string>>& paths) {
//	unordered_map<string, int> mp;
//
//	for (int i = 0; i < paths.size(); i++)
//		mp[paths[i][0]]++;
//
//	for (int i = 0; i < paths.size(); i++)
//		if (mp[paths[i][1]] == 0)
//			return paths[i][1];
//
//	return "";
//}
string destCity(vector<vector<string>>& paths) {
	unordered_set<string> st;

	for (int i = 0; i < paths.size(); i++)
		st.insert(paths[i][0]);

	for (int i = 0; i < paths.size(); i++)
		if (st.find(paths[i][1]) == st.end())
			return paths[i][1];

	return "";
}


int main()
{
	cout << boolalpha;

	vector<vector<string>> paths = { {"London","New York"} ,{"New York","Lima"},{"Lima","Sao Paulo"} };
	cout << destCity(paths) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
