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

// 4ms 9.5MB
vector<int> evenOddBit(int n) {
	vector<int> temp;
	while (n)
	{
		temp.push_back(n % 2);
		n /= 2;
	}

	int even = 0, odd = 0;
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == 1)
		{
			i % 2 == 0 ? even++ : odd++;
		}
	}

	return { even, odd };
}


int main() {
	cout << boolalpha;

	for (auto& x : evenOddBit(17))
		cout << x << " ";
	cout << '\n';

	for (auto& x : evenOddBit(2))
		cout << x << " ";
	cout << '\n';


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
