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

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
	int count = 0, n = arr.size();
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (abs(arr[i] - arr[j]) <= a)
			{
				for (int k = j + 1; k < n; k++)
				{
					if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
						count++;
				}
			}
		}
	}

	return count;
}

int main()
{
	cout << boolalpha;

	cout << sumOfMultiples(7) << '\n';
	cout << sumOfMultiples(10) << '\n';
	cout << sumOfMultiples(9) << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
