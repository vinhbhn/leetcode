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

// worked but slow
//vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
//	// merge items2 into items1
//	for (auto& i : items2)
//		items1.push_back(i);
//
//	set<int> st;
//	for (int i = 0; i < items1.size(); i++)
//		st.insert(items1[i][0]);
//
//
//	vector<vector<int>> res;
//	for (auto ele : st)
//	{
//		int sum = 0;
//		for (int i = 0; i < items1.size(); i++)
//		{
//			if (ele == items1[i][0])
//				sum += items1[i][1];
//		}
//
//		res.push_back({ ele, sum });
//	}
//
//	return res;
//}

// web, using map, 14ms, result: 25ms O(nlogn+mlogm) O(n+m) array + hash table
vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
	map<int, int> m;
	for (int i = 0; i < items1.size(); i++)
		m[items1[i][0]] = items1[i][1];

	for (int j = 0; j < items2.size(); j++)
		m[items2[j][0]] += items2[j][1];

	vector<vector<int>> res;
	for (auto& e : m)
		res.push_back({ e.first, e.second });

	return res;
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
