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

// psionl0 idea O(n) O(1) 0ms 10.7MB
int countStudents(vector<int>& students, vector<int>& sandwiches) {

	// count student like 0 (circular sandwichs) or 1 (square sandwichs)
	int c0 = 0, c1 = 0;
	for (int j = 0; j < students.size(); j++)
	{
		if (students[j] == 0)
			c0++;
		else
			c1++;
	}

	int student_eat = 0;
	// no need to do a full simulation
	// keep trach number of remaining students that prefer type of sandwich
	// if no more student choose type of sandwich that is currently on top of the stack
	// means they dont eat
	for (int i = 0; i < sandwiches.size(); i++)
	{
		if (sandwiches[i] == 0)
		{
			if (c0)
			{
				student_eat++;
				c0--;
			}
			else
				break;
		}
		else
		{
			if (c1)
			{
				student_eat++;
				c1--;
			}
			else
				break;
		}
	}

	return static_cast<int>(students.size()) - student_eat;
}

int main() {
	cout << boolalpha;

	cout << minBitFlips(10, 7) << '\n';
	cout << minBitFlips(3, 4) << '\n';

	cout << minBitFlips(90977991, 38037526) << '\n';




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
