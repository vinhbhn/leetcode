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

// 0ms 7.2MB
vector<int> sumZero(int n) {
	vector<int> v;
	if (n % 2 != 0)
	{
		v.push_back(0);
		n--;
	}

	int i = 1;
	while (n)
	{
		v.push_back(i);
		v.insert(v.begin(), -i);
		i++;
		n -= 2;
	}

	return v;
}

// 0ms 7.2MB
vector<int> sumZero(int n) {
	vector<int> v;
	if (n % 2 != 0)
	{
		v.push_back(0);
		n--;
	}

	for(int i = 1; i <= n; i+=2)
	{
		v.push_back(i);
		v.push_back(-i);
	}

	return v;
}

int main()
{
	cout << boolalpha;
	cout << maximum69Number(9669) << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
