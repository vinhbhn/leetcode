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

// worked
//string capitalizeTitle(string title) {
//    vector<string> v;
//    stringstream ss(title);
//    string word;
//
//    while (getline(ss, word, ' '))
//        v.push_back(word);
//
//    //for (auto& i : v)
//    //	std::cout << i << ' ';
//    //std::cout << '\n';
//
//    string result = "";
//    for (auto& letter : v)
//    {
//        if (letter.size() <= 2)
//            transform(letter.begin(), letter.end(), letter.begin(), ::tolower);
//        else
//        {
//            letter[0] = toupper(letter[0]);
//            for (int i = 1; i < letter.size(); i++)
//                letter[i] = tolower(letter[i]);
//        }
//
//        result += letter + ' ';
//    }
//
//    // remove ' ' in last string
//    result.pop_back();
//    return result;
//}

//https://leetcode.com/problems/capitalize-the-title/solutions/1675922/java-c-2-approaches-pictorial-explanation-faster-than-100/
// basic idea
//string capitalizeTitle(string title) {
//	int len = title.length();
//
//	for (int i = 0; i < len; i++)
//	{
//		int firstIndex = i; // store the first index of the word
//
//		while (i < len && title[i] != ' ')
//		{
//			title[i] = tolower(title[i]); // converting the character at ith index to lower case only by one
//			++i;
//		}
//
//		// if word is of length greater than 2, then turn the first character of the word to upper case
//		if (i - firstIndex > 2)
//			title[firstIndex] = toupper(title[firstIndex]); // converting the first character of the word to upper case
//	}
//
//	return title; // return the final result
//}
// O(n) O(1)
string capitalizeTitle(string title) {
	int len = title.length();

	for (int i = 0; i < len; i++)
	{
		int firstIndex = i; // store the first index of the word

		while (i < len && title[i] != ' ')
		{
			title[i] |= 32; // converting the character at ith index to lower case only by one
			++i;
		}

		// if word is of length greater than 2, then turn the first character of the word to upper case
		if (i - firstIndex > 2)
			title[firstIndex] &= ~32; // converting the first character of the word to upper case
	}

	return title; // return the final result
}



int main()
{
	cout << boolalpha;
	cout << detectCapitalUse("USA") << '\n';
	cout << detectCapitalUse("FlaG") << '\n';
	cout << detectCapitalUse("leetcode") << '\n';
	cout << detectCapitalUse("ffffffffffffffffffffF") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
