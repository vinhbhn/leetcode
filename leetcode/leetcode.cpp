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

//string generateTheString(int n) {
//	string res = "";
//	int i = n;
//
//	while (i--)
//		res += 'a';
//
//	if (n % 2 == 0)
//		res[n - 1] = 'b';
//
//	return res;
//}
string generateTheString(int n) {
	string res(n-1, 'a');
	res += (n % 2 == 0) ? 'b' : 'a';

	return res;
}

int main()
{
	cout << generateTheString(4) << '\n';
	cout << generateTheString(2) << '\n';
	cout << generateTheString(7) << '\n';


	return 0;
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
