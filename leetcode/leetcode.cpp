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

string capitalizeTitle(string title) {
	vector<string> v;
	stringstream ss(title);
	string word;

	while (getline(ss, word, ' '))
		v.push_back(word);

	//for (auto& i : v)
	//	std::cout << i << ' ';
	//std::cout << '\n';

	string result = "";
	for (auto& letter : v)
	{
		if (letter.size() <= 2)
			transform(letter.begin(), letter.end(), letter.begin(), ::tolower);
		else
		{
			letter[0] = toupper(letter[0]);
			for (int i = 1; i < letter.size(); i++)
				letter[i] = tolower(letter[i]);
		}

		result += letter + ' ';
	}

	// remove ' ' in last string
	result.pop_back();
	return result;
}


int main()
{
	cout << capitalizeTitle("capiTalIze tHe titLe") << '\n';
	cout << capitalizeTitle("First leTTeR of EACH Word") << '\n';
	cout << capitalizeTitle("i lOve leetcode") << '\n';

	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
