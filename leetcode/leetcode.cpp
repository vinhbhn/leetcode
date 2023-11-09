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

// 64ms 38.9MB O(l*(m + nlogn)) O(l*(n+logn)) m = nums.size(), n = copyV.size() 
vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
	vector<bool> res;
	for (int i = 0; i < l.size(); i++)
	{
		bool noDiff = true;
		vector<int> copyV;
		copy(nums.begin() + l[i], nums.begin() + r[i] + 1, back_inserter(copyV));

		int n = copyV.size();
		if (n <= 2)
		{
			res.push_back(true);
			continue;
		}

		sort(copyV.begin(), copyV.end());
		int moves = copyV[1] - copyV[0];
		for (int j = 2; j < n; j++)
		{
			if (copyV[j] - copyV[j - 1] != moves)
			{
				noDiff = false;
				break;
			}
		}

		if (noDiff)
			res.push_back(true);
		else
			res.push_back(false);

	}

	return res;
}

// 84ms 39MB O(l*(m + nlogn)) O(l*(n+logn)) m = nums.size(), n = copyV.size(), l = l.size()
bool canMakeArithmeticProgression(vector<int>& arr) {
	sort(arr.begin(), arr.end());

	int moves = arr[1] - arr[0];
	for (int i = 2; i < arr.size(); i++)
	{
		if (arr[i] - arr[i - 1] != moves)
			return false;
	}

	return true;
}
vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
	vector<bool> res;
	for (int i = 0; i < l.size(); i++)
	{
		vector<int> copyV;
		copy(nums.begin() + l[i], nums.begin() + r[i] + 1, back_inserter(copyV));

		if (canMakeArithmeticProgression(copyV))
			res.push_back(true);
		else
			res.push_back(false);

	}

	return res;
}

// 51ms 26.3MB O(l*nlogn) O(l*(n+logn)) n = copyV.size(), l = l.size()
bool canMakeArithmeticProgression(vector<int>& arr) {
	sort(arr.begin(), arr.end());

	int moves = arr[1] - arr[0];
	for (int i = 2; i < arr.size(); i++)
	{
		if (arr[i] - arr[i - 1] != moves)
			return false;
	}

	return true;
}
vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
	vector<bool> res;
	for (int i = 0; i < l.size(); i++)
	{
		vector<int> copyV(nums.begin() + l[i], nums.begin() + r[i] + 1);

		if (canMakeArithmeticProgression(copyV))
			res.push_back(true);
		else
			res.push_back(false);

	}

	return res;
}

// web 19ms real 22ms 21.4MB
vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
	vector<bool> res;
	for (int i = 0, j = 0; i < l.size(); i++)
	{
		auto [p_min, p_max] = minmax_element(nums.begin() + l[i], nums.begin() + r[i] + 1);
		int len = r[i] - l[i] + 1, d = (*p_max - *p_min) / (len - 1);
		if (*p_max == *p_min)
			res.push_back(true);
		else if ((*p_max - *p_min) % (len - 1))
			res.push_back(false);
		else
		{
			vector<bool> n(len);
			for (j = l[i]; j <= r[i]; j++)
			{
				if ((nums[j] - *p_min) % d || n[(nums[j] - *p_min) / d])
					break;
				n[(nums[j] - *p_min) / d] = true;
			}
			res.push_back(j > r[i]);
		}
	}

	return res;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
