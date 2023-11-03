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

// web 0ms real 3ms 9.4MB
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	stack<int> s;
	unordered_map<int, int> nextGreater;

	for (int num : nums2)
	{
		while (!s.empty() && s.top() < num)
		{
			nextGreater[s.top()] = num;
			s.pop();
		}
		s.push(num);
	}

	vector<int> result;
	for (int num : nums1)
	{
		if (nextGreater.find(num) != nextGreater.end())
			result.push_back(nextGreater[num]);
		else
			result.push_back(-1);
	}

	return result;
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
