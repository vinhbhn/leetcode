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

int minimumSum(int num) {
	vector<int> v;
	while (num)
	{
		v.push_back(num % 10);
		num /= 10;
	}

	sort(v.begin(), v.end());
	int n1 = v[0] * 10 + v[2];
	int n2 = v[1] * 10 + v[3];

	return n1 + n2;
}

int main()
{
	cout << minimumSum(2932) << '\n';
	cout << minimumSum(4009) << '\n';


	return 0;
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
