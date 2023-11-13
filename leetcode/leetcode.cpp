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

// 15ms 16.3MB O(n) O(n)
char nextGreatestLetter(vector<char>& letters, char target) {
	for (auto ch : letters)
	{
		if (ch > target)
			return ch;
	}

	return letters[0]; 
}

// web 0ms real 13ms 16.2MB
char nextGreatestLetter(vector<char>& letters, char target) {
	vector<int> alphabets(26, 0);
	for (int i = 0; i < letters.size(); i++)
	{
		alphabets[letters[i] - 'a']++;
	}
	int index = (target - 'a' + 1) % 26;
	while (alphabets[index] == 0)
	{
		index = (index + 1) % 26;
	}
	return index + 'a';
}

int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
