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

// 0ms 8.6MB 
int getDecimalValue(ListNode* head) {
	vector<int> res;
	while (head != nullptr)
	{
		res.push_back(head->val);
		head = head->next;
	}

	int ans = 0, b = 1;
	for (int i = res.size() - 1; i >= 0; i--)
	{
		ans += res[i] * b;
		b *= 2;
	}

	return ans;
}

// web 1ms real 4ms 8.5MB
int getDecimalValue(ListNode* head) {
	int ans = 0;
	while (head != nullptr)
	{
		ans = ans * 2 + head->val;
		head = head->next;
	}

	return ans;
}

int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
