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

// 2386ms 72.89MB
//vector<int> replaceElements(vector<int>& arr) {
//    vector<int> res;
//    for (int i = 1; i < arr.size(); i++)
//    {
//        // replace every element in that array with the greatest element among the elements to its right
//        auto max = max_element(arr.begin() + i, arr.end());
//        res.push_back(*max);
//    }
//    //  replace the last element with -1
//    res.push_back(-1);
//
//    return res;
//}

// work 74/90
//vector<int> replaceElements(vector<int>& arr) {
//    vector<int> res;
//    for (int i = 0; i < arr.size() - 1; i++)
//    {
//        int max = 0;
//        for (int j = i + 1; j < arr.size(); j++)
//        {
//            max = std::max(max, arr[j]);
//        }
//        res.push_back(max);
//    }
//    //  replace the last element with -1
//    res.push_back(-1);
//
//    return res;
//}

// 71ms 72.70MB
vector<int> replaceElements(vector<int>& arr) {
    vector<int> res;
	res.push_back(-1);
	int max = 0;
	for (int i = arr.size() - 1; i >= 0; i--)
	{
		max = std::max(max, arr[i]);
		res.push_back(max);
	}

	reverse(res.begin(), res.end());
    return res;
}

int main()
{
	cout << boolalpha;
	cout << canConstruct("aa", "aab") << '\n';
	cout << canConstruct("a", "b") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
