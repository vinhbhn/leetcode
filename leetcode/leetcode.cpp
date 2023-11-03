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


// 8ms 8.7MB O(n1*n2) O(n)
vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
	for (int i = 0; i < n1.size(); i++)
	{
		auto pos = find(n2.begin(), n2.end(), n1[i]);
		bool haveGreatered = false;
		for (; pos != n2.end(); pos++)
		{
			if (*pos > n1[i])
			{
				haveGreatered = true;
				n1[i] = *pos;
				break;
			}
		}

		if (!haveGreatered)
			n1[i] = -1;
	}

	return n1;
}

// web 0ms real 3ms 9.4MB O(n1+n2)
// https://leetcode.com/problems/next-greater-element-i/solutions/3384541/c-java-python-javascript-optimized-with-stack-10-lines-of-code-brute-force/
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	stack<int> s;
	unordered_map<int, int> nextGreater; // map for next greater element

	for (int num : nums2)
	{
		while (!s.empty() && s.top() < num)
		{
			// Pop elements from stack and update map with next greater element
			nextGreater[s.top()] = num;
			s.pop();
		}
		s.push(num); // push current element onto stack
	}

	for (int &num : nums1)
	{
		// check if each element in nums1 has a next greater element in map
		num = nextGreater.count(num) ? nextGreater[num] : -1; // update element in nums1 with next greater element or -1
	}

	return nums1;
}

int main() {

	vector n1 = { 4,1,2 };
	vector n2 = { 1,3,4,2 };
	for (auto x : nextGreaterElement(n1, n2))
		cout << x << ' ';
	cout << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
