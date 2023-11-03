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

// 0ms 6.3MB O(n) O(n)
int countLargestGroup(int n) {
	vector<int> v(37, 0);
	for (int i = 1; i <= n; i++)
	{
		int sum = 0, temp = i;
		while (temp)
		{
			sum += temp % 10;
			temp /= 10;
		}
		v[sum]++;
	}

	auto m = max_element(v.begin(), v.end());
	int count = 0;
	for (int i = 1; i < v.size(); i++)
		if (v[i] == *m)
			count++;

	return count;
}

// 3ms 6.3MB
int countLargestGroup(int n) {
	vector<int> v(37, 0);
	for (int i = 1; i <= n; i++)
	{
		int sum = 0, temp = i;
		while (temp)
		{
			sum += temp % 10;
			temp /= 10;
		}
		v[sum]++;
	}

	auto m = max_element(v.begin(), v.end());
	return count(v.begin(), v.end(), *m);
}

int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
