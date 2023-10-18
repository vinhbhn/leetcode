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

//bool strongPasswordCheckerII(string password) {
//	// check it does not contain 2 of the same character in adjacent position
//	// and it must have at least 8 letters 
//	// contains at least one lowercase, one uppercase, one digit, one special character.
//	string special_characters = "!@#$%^&*()-+";
//	if ((password.length() < 8)
//		|| (adjacent_find(password.begin(), password.end()) != password.end())
//		|| (find_first_of(password.begin(), password.end(), special_characters.begin(), special_characters.end()) == password.end()))
//		return false;
//
//	bool l = false, u = false, d = false;
//	for (auto &ch : password)
//	{
//		if (islower(ch))
//			l = true;
//
//		if (isupper(ch))
//			u = true;
//
//		if (isdigit(ch))
//			d = true;
//
//		if (l && u && d)
//			return true;
//	}
//	
//	return false;
//}

// because input only have special characters, not all special characters in ASCII
bool strongPasswordCheckerII(string password) {
	if ((password.length() < 8) || (adjacent_find(password.begin(), password.end()) != password.end()))
		return false;

	bool l = false, u = false, d = false, sp = false;
	for (auto& ch : password)
	{
		if (islower(ch))
			l = true;
		else if (isupper(ch))
			u = true;
		else if (isdigit(ch))
			d = true;
		else
			sp = true;
	}

	return (l && u && d && sp);
}

int main()
{
	cout << boolalpha;
	cout << strongPasswordCheckerII("IloveLe3tcode!") << '\n';
	cout << strongPasswordCheckerII("Me+You--IsMyDream") << '\n';
	cout << strongPasswordCheckerII("1aB!") << '\n';

	return 0;
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
