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

// 62ms 14.1MB O(nlogn + (n * q)) O(n)
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
	sort(nums.begin(), nums.end());

	for (int i = 0; i < queries.size(); i++)
	{
		int sum = 0, count = 0;
		for (int j = 0; j < nums.size(); j++)
		{
			if (nums[j] <= queries[i] && sum + nums[j] <= queries[i])
			{
				sum += nums[j];
				count++;
			}
			else
				break;
		}

		queries[i] = count;
	}

	return queries;
}

// web 3ms real 14ms 13.9MB
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
	sort(nums.begin(), nums.end());
	for (int i = 1; i < nums.size(); i++)
	{
		nums[i] += nums[i - 1];
	}

	for (int i = 0; i < queries.size(); i++)
	{
		int low = 0, high = nums.size() - 1, ans = 0;
		while(low <= high)
		{
			int mid = (low + high) / 2;
			if (nums[mid] <= queries[i])
			{
				ans = max(ans, mid + 1);
				low = mid + 1;
			}
			else
				high = mid - 1;
		}

		queries[i] = ans;
	}

	return queries;
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
