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

// https://leetcode.com/problems/excel-sheet-column-title/solutions/3943321/c-beats100-step-by-step-full-explanation/
// O(log(columnNumber)) O(log(columnNumber))
string convertToTitle(int columnNumber) {
	string res = "";

	while (columnNumber > 0)
	{
		// conver the column number to 0-based index
		columnNumber--;

		// calculate the remainder to determine the character
		char character = 'A' + (columnNumber % 26);

		// Append the character to the result
		res = character + res;

		// Update the column number for the next iteration
		columnNumber /= 26;

	}

	return res;
}

int main()
{
	cout << boolalpha;
	cout << char(90) << '\n';
	cout << convertToTitle(701) << '\n';
	cout << convertToTitle(28) << '\n';
	cout << convertToTitle(1) << '\n';



	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
