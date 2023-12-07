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

//171ms 94.7MB
int findCenter(vector<vector<int>>& edges) {
	vector<int> v(1e5+1, 0);
	int max = 0, maxi = 0;
	for (int i = 0; i < edges.size(); i++)
	{
		if (++v[edges[i][0]] > max)
		{
			max = v[edges[i][0]];
			maxi = edges[i][0];
		}
		if (++v[edges[i][1]] > max)
		{
			max = v[edges[i][1]];
			maxi = edges[i][1];
		}
	}

	return maxi;
}

//162ms 94.7MB
int findCenter(vector<vector<int>>& edges) {
	vector<int> v(1e5 + 1, 0);
	int maxc = 0, maxi = 0;
	int n = edges.size();
	for (int i = 0; i < n; i++)
	{
		if (++v[edges[i][0]] > maxc)
		{
			maxc = v[edges[i][0]];
			maxi = edges[i][0];
		}
		if (++v[edges[i][1]] > maxc)
		{
			maxc = v[edges[i][1]];
			maxi = edges[i][1];
		}

		if (maxc > n / 2)
			return maxi;
	}

	return maxi;
}

//151ms 94.5MB
int findCenter(vector<vector<int>>& edges) {
	vector<int> v(1e5 + 1, 0);
	int maxc = 0, maxi = 0;
	int n = edges.size();
	for (int i = 0; i < n; i++)
	{
		if (++v[edges[i][0]] > ++v[edges[i][1]])
		{
			maxc = v[edges[i][0]];
			maxi = edges[i][0];
		}
		else
		{
			maxc = v[edges[i][1]];
			maxi = edges[i][1];
		}

		if (maxc > n / 2)
			return maxi;
	}

	return maxi;
}

// web 1ms real 139ms 67.7MB
int findCenter(vector<vector<int>>& ed) {
	if (ed[0][0] == ed[1][0] || ed[0][0] == ed[1][1])
		return ed[0][0];

	return ed[0][1];
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
/*
int init = [] {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ofstream out("user.out");
	cout.rdbuf(out.rdbuf());
	for (string line; getline(cin, line); cout << '\n') {
		istringstream ss(line);
		char ch;
		int a, b, c, d;
		ss >> ch >> ch >> a >> ch >> b >> ch >> ch >> ch >> c >> ch >> d;
		if (a == c || a == d) cout << a;
		else cout << b;
	}
	exit(0);
	return 0;
}();
*/
