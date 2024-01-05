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

// 10ms 21.2MB O(n^2)
int maximumNumberOfStringPairs(vector<string>& words) {
	int count = 0;
	unordered_set<int> st; // add known pair, each string can belong in at most one pair
	for (int i = 0; i < words.size() - 1; i++)
	{
		for (int j = i + 1; j < words.size(); j++)
		{
			if (!st.contains(i) and !st.contains(j))
			{
				if ((words[i][0] == words[j][1]) and (words[i][1] == words[j][0]))
				{
					count++;
					st.insert(i);
					st.insert(j);
				}
			}
		}
	}

	return count;
}

// web 0ms real 17ms 21.6MB 
int maximumNumberOfStringPairs(vector<string>& words) {
	int count = 0;
	unordered_set<string> st; // add known string, each string can belong in at most one pair
	for (int i = 0; i < words.size(); i++)
	{
		string temp = words[i];
		reverse(temp.begin(), temp.end());
		if (st.contains(temp))
			count++;
		else
			st.insert(words[i]);
	}

	return count;
}

// web 0ms real 0ms 21.7MB // st.contain vs st.find
int maximumNumberOfStringPairs(vector<string>& words) {
	int count = 0;
	unordered_set<string> st; // add known string, each string can belong in at most one pair
	for (int i = 0; i < words.size(); i++)
	{
		string temp = words[i];
		reverse(temp.begin(), temp.end());
		if (st.find(temp) != st.end())
			count++;
		else
			st.insert(words[i]);
	}

	return count;
}

int main() {
	cout << boolalpha;

	return 0;
}

/*
static auto init = [](){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return 0;
}();
*/
