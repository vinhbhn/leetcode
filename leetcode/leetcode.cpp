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

// worked, fastest 7ms 6.2MB
//int distanceTraveled(int mainTank, int additionalTank) {
//	int res = 0;
//	bool consume5l = false;
//	while (mainTank > 0)
//	{
//		if (mainTank >= 5)
//		{
//			res += 50;
//			mainTank -= 5;
//			consume5l = true;
//		}
//		else
//		{
//			res += mainTank * 10;
//			mainTank = 0;
//		}
//
//
//		if (additionalTank > 0 && consume5l)
//		{
//			additionalTank--;
//			mainTank++;
//			consume5l = false;
//		}
//	}
//
//	return res;
//}

// a bit slower 12ms 6.6MB
int distanceTraveled(int mainTank, int additionalTank) {
	int ans = 0, used = 0;
	while (mainTank > 0)
	{
		used++;
		if (used % 5 == 0 && additionalTank > 0)
		{
			additionalTank--;
			mainTank++;
		}
		mainTank--;
		ans += 10;
	}

	return ans;
}

int main()
{
	cout << boolalpha;
	cout << distanceTraveled(5, 10) << '\n';
	cout << distanceTraveled(1, 2) << '\n';


	return 0;

}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
