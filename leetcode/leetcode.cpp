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

// longer than bottom
string formatMonth(string m)
{
	string res = "";
	if (m == "Jan")
		res = "-01-";
	else if (m == "Feb")
		res = "-02-";
	else if (m == "Mar")
		res = "-03-";
	else if (m == "Apr")
		res = "-04-";
	else if (m == "May")
		res = "-05-";
	else if (m == "Jun")
		res = "-06-";
	else if (m == "Jul")
		res = "-07-";
	else if (m == "Aug")
		res = "-08-";
	else if (m == "Sep")
		res = "-09-";
	else if (m == "Oct")
		res = "-10-";
	else if (m == "Nov")
		res = "-11-";
	else if (m == "Dec")
		res = "-12-";

	return res;
}
string formatDay(string d)
{
	// remove 2 words in the last
	d.pop_back();
	d.pop_back();
	// or
	//d.substr(0, d.length() - 2);
	if (d.size() == 1)
		d = '0' + d;

	return d;
}
string reformatDate(string date) {
	string temp = "", res = "";
	vector<string> v;
	for (auto ch : date)
	{
		if (ch == ' ')
		{
			v.push_back(temp);
			temp = "";
		}
		else
			temp += ch;
	}
	v.push_back(temp);

	res += v[2]; // year
	res += formatMonth(v[1]); // month
	res += formatDay(v[0]); // day

	return res;
}



string formatMonth(string m)
{
	if (m == "Jan")
		return  "01";
	else if (m == "Feb")
		return  "02";
	else if (m == "Mar")
		return  "03";
	else if (m == "Apr")
		return  "04";
	else if (m == "May")
		return  "05";
	else if (m == "Jun")
		return  "06";
	else if (m == "Jul")
		return  "07";
	else if (m == "Aug")
		return  "08";
	else if (m == "Sep")
		return  "09";
	else if (m == "Oct")
		return  "10";
	else if (m == "Nov")
		return  "11";
	else if (m == "Dec")
		return  "12";

	return "";
}
string reformatDate(string date) {
	string res = "";
	// date.length() == 13 <-> day >= 10th
	if (date.length() == 13)
		res = date.substr(9, 4) + '-' + formatMonth(date.substr(5, 3)) + '-' + date.substr(0, 2);
	else
		res = date.substr(8, 4) + '-' + formatMonth(date.substr(4, 3)) + '-' + '0' + date.substr(0, 1);

	return res;
}

int main()
{
	cout << boolalpha;

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
