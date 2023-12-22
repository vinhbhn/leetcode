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

// 2ms 7.9MB
std::vector<std::string> split(const std::string& s, char delim) {
	std::stringstream ss(s);
	std::string item;
	std::vector<std::string> elems;
	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}
int countAsterisks(string s) {
	vector<string> v = split(s, '|');

	int count = 0;
	for (int i = 0; i < v.size(); i += 2)
	{
		count += ::count(v[i].begin(), v[i].end(), '*');
	}

	return count;
}

// web 0ms real 3ms 6.9MB
int countAsterisks(string s) {
	int count = 0,vbar = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '*' && vbar % 2 == 0)
			count++;

		if (s[i] == '|')
			vbar++;
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
