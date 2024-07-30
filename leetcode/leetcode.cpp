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

// O(NlogN) O(1) 0ms 8.9MB
string clearDigits(string s) {
	stack<char> st;

	for (auto ch : s)
	{
		if (isalpha(ch))
			st.push(ch);
		else
			st.pop();
	}

	string ans = "";
	while (!st.empty())
	{
		ans += st.top();
		st.pop();
	}
	reverse(ans.begin(), ans.end());

	return ans;
}

int main() {
	cout << boolalpha;

	cout << clearDigits("abc") << '\n';
	cout << clearDigits("cb34") << '\n';
	cout << clearDigits("cb34a") << '\n';

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
