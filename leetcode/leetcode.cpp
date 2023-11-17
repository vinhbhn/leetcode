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

// 191ms 96.7MB O(nlogn) O(logn)
int minPairSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());

	int first = 0, last = nums.size() - 1, maxV = 0, value = 0;
	vector<int> res;
	while (first < last)
	{
		maxV = max(maxV, nums[first] + nums[last]);

		first++;
		last--;
	}

	return maxV;
}

//https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/solutions/4296726/more-than-one-way-detail-explanation-java-c-python-javascript-c/?envType=daily-question&envId=2023-11-17
// 136ms 113.3 MB
int minPairSum(vector<int>& nums) {
	int maxSum = INT_MIN; // Variable to store the minimized maximum pair sum
	int minNum = INT_MAX; // Variable to store the minimum number in the array
	int maxNum = INT_MIN; // Variable to store the maximum number in the array

	vector<int> freq(100001, 0); // Vector to store the frequency of each number in the array

	// Iterate through the array to populate frequency vector and find min and max number
	for (int num : nums)
	{
		freq[num]++;
		minNum = min(minNum, num);
		maxNum = max(maxNum, num);
	}

	// Initialize pointers for two numbers to form pairs
	int low = minNum;
	int high = maxNum;
	
	// Iterate while low pointers is less than or equal to high pointer
	while (low <= high)
	{
		// If frequency of the number at low pointer is zero, move low pointer to the right
		if (freq[low] == 0)
			low++;
		else if(freq[high] == 0)
		{
			// If frequency of the number at high pointer is zero, move high pointer to the left
			high--;
		}
		else
		{
			// Both low and high pointers point to valid numbers
			
			// Calculate the sum of the pair at the current pointers
			int currentPairSum = low + high;
			// Update maxSum if the current pair sum is greater
			maxSum = max(maxSum, currentPairSum);
			// Decrese the frequency of the numbers at low and high pointers
			freq[low]--;
			freq[high]--;

		}
	}

	return maxSum; 
}


int main() {
	cout << boolalpha;
	cout << countPalindromicSubsequence("aabca") << '\n';
	cout << countPalindromicSubsequence("bbcbaba") << '\n';
	cout << countPalindromicSubsequence("adc") << '\n';


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
