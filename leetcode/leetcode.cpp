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

// 24ms 10.1MB
//void duplicateZeros(vector<int>& arr) {
//	int oldSize = arr.size();
//
//	for (auto it = arr.begin(); it != arr.end();)
//	{
//		if (*it == 0)
//		{
//			it = arr.insert(it, 0);
//			it += 2;
//		}
//		else
//			it++;
//	}
//
//	arr.resize(oldSize);
//}

// web 0ms real 8ms 10MB
void duplicateZeros(vector<int>& arr) {
	int zeros = count(arr.begin(), arr.end(), 0);
	int n = arr.size();
	for (int i = n - 1; i >= 0; i--)
	{
		if (i + zeros < n)
			arr[i + zeros] = arr[i];

		if (arr[i] == 0)
		{
			zeros--;
			if (i + zeros < n)
				arr[i + zeros] = arr[i];
		}
	}

}

// web 3ms real 3ms 10.4MB
void duplicateZeros(vector<int>& arr) {
	int oldSize = arr.size();
	vector<int> ans;
	for (auto it : arr)
	{
		if (it == 0)
		{
			ans.push_back(0);
			ans.push_back(0);
		}
		else
			ans.push_back(it);
	}

	copy(ans.begin(), ans.begin() + oldSize, arr.begin()); 
}

int main()
{
	cout << boolalpha;
	vector<int> arr = { 1,0,2,3,0,4,5,0 };
	cout << duplicateZeros(arr) << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
