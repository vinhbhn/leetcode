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

// 2ms 6.7MB
//int maxRepeating(string sequence, string word) {
//	string w = word;
//	int k = 0;
//	while (word.length() <= sequence.length())
//	{
//		if (sequence.find(word) != string::npos)
//			k++;
//		else
//			break;
//
//		word += w;
//	}
//
//	return k;
//}

// 1ms
int maxRepeating(string sequence, string word) {
	string w = word;
	int k = 0;
	while (sequence.find(word) != string::npos)
	{
		k++;
		word += w;
	}

	return k;
}

int main() {
	cout << boolalpha;
	string sequence = "ababc", word = "ac";
	cout << maxRepeating(sequence, word) << '\n';

	sequence = "ababc", word = "ab";
	cout << maxRepeating(sequence, word) << '\n';

	sequence = "ababc", word = "ba";
	cout << maxRepeating(sequence, word) << '\n';

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
