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

// 12ms 12.9MB
//int numUniqueEmails(vector<string>& emails) {
//	unordered_set<string> st;
//
//	for (auto& email : emails)
//	{
//		auto pos = email.find('@');
//		auto plus = email.find('+');
//		if (plus != string::npos && plus < pos)
//			email.erase(plus, pos - plus);
//
//		// refind pos of '@'
//		pos = email.find('@');
//		auto dot = std::remove(email.begin(), email.begin() + pos, '.');
//		email.erase(dot, email.begin() + pos);
//
//		cout << email << ' ';
//		st.insert(email);
//	}
//
//	return st.size();
//}

// web 3ms real 24ms 14.2MB
int numUniqueEmails(vector<string>& emails) {
	unordered_set<string> st;

	for (auto& email : emails)
	{
		string cleanEmail = "";
		for (char c : email)
		{
			if (c == '+' || c == '@')
				break;
			if (c == '.')
				continue;
			cleanEmail += c;
		}

		cleanEmail += email.substr(email.find('@'));
		st.insert(cleanEmail);
	}

	return st.size();
}

int main()
{
	cout << boolalpha;
	vector<string> emails = { "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" };
	cout << numUniqueEmails(emails) << '\n';

	emails = { "a@e+c.com", "a@e+c+f.com" };
	cout << numUniqueEmails(emails) << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
