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

//int countPoints(std::string rings) {
//	int sum = 0;
//	std::string numbers = "0123456789";
//	bool r = false, g = false, b = false;
//	for (auto rod : numbers)
//	{
//		for (std::string::size_type j = 1; j < rings.length(); j += 2)
//		{
//			if (rings[j] == rod)
//			{
//				if (rings[j - 1] == 'R')
//					r = true;
//				if (rings[j - 1] == 'G')
//					g = true;
//				if (rings[j - 1] == 'B')
//					b = true;
//			}
//		}
//
//		// rod have 3 rings color
//		if (r && g && b)
//			sum++;
//
//		// reset
//		r = false;
//		g = false;
//		b = false;
//	}
//
//	return sum;
//}

// web
int countPoints(std::string rings) {
	int count = 0;
	std::unordered_map<char, std::vector<char>> mp;
	for (std::string::size_type i = 0; i < rings.size(); i += 2)
	{
		mp[rings[i+1]].push_back(rings[i]);
	}
	for (auto &it : mp)
	{
		std::set<char> st(it.second.begin(), it.second.end());
		count += (st.size() == 3);
	}

	return count;
}


int main()
{
	std::cout << std::boolalpha;
	std::cout << countPoints("B0B6G0R6R0R6G9") << '\n';
	std::cout << countPoints("B0R0G0R9R0B0G0") << '\n';
	std::cout << countPoints("G4") << '\n';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
