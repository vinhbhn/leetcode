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

//int minimizedStringLength(std::string s) {
//	std::unordered_set<char> st;
//	for (auto ch : s)
//		st.insert(ch);
//
//	return st.size();
//}

int minimizedStringLength(std::string s) {
	return std::unordered_set<char>(s.begin(), s.end()).size();
}

int main()
{
	std::cout << minimizedStringLength("aaabc") << '\n';
	std::cout << minimizedStringLength("cbbd") << '\n';
	std::cout << minimizedStringLength("dddaaa") << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
