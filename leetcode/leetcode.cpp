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

// 0ms 7.4MB O(n) O(1)
vector<string> summaryRanges(vector<int>& nums) {
	int n = nums.size();
	if (n == 0)
		return {};
	if (n == 1)
		return { to_string(nums[0]) };

	string temp = "";
	vector<string> res;
	for (int i = 0; i < n - 1; i++)
	{
		if (nums[i] + 1 != nums[i + 1])
		{
			if (temp == "")
				res.push_back(to_string(nums[i]));
			else
			{
				temp += to_string(nums[i]);
				res.push_back(temp);
				temp = "";
			}

		}
		else
		{
			if (temp == "")
				temp = to_string(nums[i]) + "->";
		}
	}
	if (nums[n - 1] != nums[n - 2] + 1)
		res.push_back(to_string(nums[n - 1]));
	else
	{
		temp += to_string(nums[n - 1]);
		res.push_back(temp);
	}


	return res;
}

//https://leetcode.com/problems/summary-ranges/solutions/1805583/c-detailed-explanation-w-dry-run-faster-than-100-basic-concept-used/
vector<string> summaryRanges(vector<int>& nums) {
	int n = nums.size();
	if (n == 0)
		return {};
	if (n == 1)
		return { to_string(nums[0]) };

	string temp = "";
	vector<string> res;
	for (int i = 0; i < nums.size(); i++)
	{
		int j = i; // declare another pointer that will move

		// run that pointer until our range is not break
		while (j + 1 < n && nums[j + 1] == nums[j] + 1)
			j++;

		// if j > i, that means we got our range more than one element
		if (j > i)
			temp += to_string(nums[i]) + "->" + to_string(nums[j]);
		else
			temp += to_string(nums[i]);

		res.push_back(temp); // push one possible answer string to our answer
		temp = ""; // again reinitalize temp for new poissible answers
		i = j; // and move i to j for a fresh start
	}

	return res;
}


int main()
{

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
