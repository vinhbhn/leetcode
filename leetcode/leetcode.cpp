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

// 0ms 17.2MB
int countSeniors(vector<string>& details) {
	int count = 0;
	for (auto& detail : details)
	{
		char f = detail[11], s = detail[12];
		if (f - '0' > 6)
			count++;
		else if (f - '0' == 6 and s - '0' > 0) // more then 60 years old
			count++;
	}

	return count;
}

// 0ms 17.2MB
int countSeniors(vector<string>& details) {
	int count = 0;
	for (auto& detail : details)
	{
		int age = (detail[11] - '0') * 10 + (detail[12] - '0');
		count += age > 60;
	}

	return count;
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
