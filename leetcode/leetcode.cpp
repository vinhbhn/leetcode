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

// 0ms 8.7MB
//int pivotInteger(int n) {
//	vector<int> v(1001, 0);
//	for (int i = 1; i <= n; i++)
//		v[i] = v[i - 1] + i;
//
//	int center = sqrt(v[n]);
//
//	return  (v[n] - v[center] == v[center - 1]) ? center : - 1;
//}

// 3ms 6.5MB
int pivotInteger(int n) {
	double x = sqrt(n * (n + 1) / 2);
	
	return (int(x) == x) ? x : -1;
}


int main()
{
	cout << boolalpha;
	cout << pivotInteger(8) << '\n';
	
	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
