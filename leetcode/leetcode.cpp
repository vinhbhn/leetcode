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

//int accountBalanceAfterPurchase(int purchaseAmount) {
//	int roundedAmount = std::floor((purchaseAmount + 5) / 10) * 10;
//
//	return 100 - roundedAmount;
//}
int accountBalanceAfterPurchase(int purchaseAmount) {
	int roundedAmount = (purchaseAmount + 5) / 10;
	roundedAmount *= 10;

	return 100 - roundedAmount;
}


int main()
{
	std::cout << accountBalanceAfterPurchase(9) << '\n';
	std::cout << accountBalanceAfterPurchase(15) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
