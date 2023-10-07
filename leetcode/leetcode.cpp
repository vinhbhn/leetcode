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

//std::string gcdOfStrings(std::string str1, std::string str2) {
//	std::string gcd = "", m_str2 = "";
//
//	// minimize string 2
//	std::unordered_set<char> st;
//	for (auto ch : str2)
//		st.insert(ch);
//	for (auto x : st)
//		m_str2 += x;
//
//	// because str1 = str2 + str2 + ... 
//	// so after minimize str1 = m_str2 + m_str2 + ...
//	// so str1 % m_str2 == 0
//	int k = 0;
//	if (str1.length() % m_str2.length() == 0)
//		k = str1.length() / m_str2.length();
//	else
//		return "";
//
//	for (int i = 1; i <= k; i++)
//	{
//		gcd += m_str2;
//	}
//
//	if (gcd == str1)
//		return m_str2;
//	else
//		return "";
//
//	return gcd;
//}

// https://leetcode.com/problems/greatest-common-divisor-of-strings/solutions/3124940/c-one-line-beats-100-runtime-explanation/
std::string gcdOfStrings(std::string str1, std::string str2) {
	return (str1 + str2 == str2 + str1) ? str1.substr(0, std::gcd(size(str1), size(str2))) : "";
}


int main()
{
	std::cout << gcdOfStrings("ABCABC", "ABC") << '\n';
	std::cout << gcdOfStrings("ABABAB", "ABAB") << '\n';
	std::cout << gcdOfStrings("LEET", "CODE") << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
