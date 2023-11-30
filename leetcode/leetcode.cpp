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

// 3ms 9.1MB O(n*n) O(n/2)
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
	for (int i = 0; i < image.size(); i++)
	{
		reverse(image[i].begin(), image[i].end());

		// invert
		for(int j = 0; j < image[i].size(); j++)
		{
			if (image[i][j] == 0)
				image[i][j] = 1;
			else
				image[i][j] = 0;
		}
	}

	return image;
}

int main() {
	cout << boolalpha;


	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
/*Solution() {
ios::sync_with_stdio(0);
cin.tie(0);
	}*/
