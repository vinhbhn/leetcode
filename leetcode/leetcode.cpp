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

// area of triangle > 0
bool isBoomerang(std::vector<std::vector<int>>& points) {
	// area(ABC) = |(xB - xA)(yC-yA) - (xC-xA)(yB-yA)| / 2
	return (std::abs(((points[1][0] - points[0][0]) * (points[2][1] - points[0][1])) - ((points[2][0] - points[0][0]) * (points[1][1] - points[0][1]))) / 2.0) > 0;
}

int main()
{
	std::vector heights{ 1,1,4,2,1,3 };
	std::cout << heightChecker(heights) << '\n';

	heights = { 5,1,2,3,4 };
	std::cout << heightChecker(heights) << '\n';

	heights = { 1,2,3,4,5 };
	std::cout << heightChecker(heights) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);*/
