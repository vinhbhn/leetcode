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

// pass 151/212
//int maxProfit(vector<int>& prices) {
//
//	auto min_price_it = min_element(prices.begin(), prices.end());
//
//	// case 1: vi tri cua min_price == ngay cuoi, nghia la khong the mua sau do ban, chuoi giam dan 
//	if (min_price_it == prices.end() - 1)
//		return 0;
//
//	// case 2: bat dau tai vi tri min_price, xet cac so dang sau tru di no, sau do lay so lon nhat
//	int max_profit = 0;
//	for (auto it{ min_price_it }; it < prices.end(); it++)
//		max_profit = max(max_profit, *it - *min_price_it);
//
//	return max_profit;
//}

// O(n^2), pass 200/212
//int maxProfit(vector<int>& prices) {
//	int ps = static_cast<int>(prices.size());
//
//	// neu chi co 1 ngay, thi tra ve 0 do khong the mua hoac ban
//	if (ps == 1)
//		return 0;
//
//	vector<int> res;
//	int mp = 0; // max profit in a day
//	// bat dau tu ngay 2, cu lay ngay hom sau tru cho ngay dau
//	for (int location = 0; location < ps - 1; location++)
//	{
//		mp = 0;
//		for (int after_day_of_location = location + 1; after_day_of_location < ps; after_day_of_location++)
//		{
//			if (prices[location] < prices[after_day_of_location])
//				mp = max(mp, prices[after_day_of_location] - prices[location]);
//		}
//		res.push_back(mp); // luu ket qua lon nhat sau khi tru cua tung ngay
//	}
//	
//	return *max_element(res.begin(), res.end());
//}

// O(n^2)
//int maxProfit(vector<int>& prices) {
//	// lay ngay sau tru cho ngay dau, sau do tang vi tri ngay dau, tiep tuc cho den cuoi
//	// sau do tim so lon nhat tu vi tri 0 cho den vi tri cuoi - 1
//	int mp = 0;
//	for (int i = 0; i < prices.size() - 1; i++)
//	{
//		for (int j = i + 1; j < prices.size(); j++)
//		{
//			mp = max(mp, prices[j] - prices[i]);
//		}
//	}
//
//	return mp;
//}

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/solutions/5361970/video-keep-minimum-price-solution/
// O(n)
//int maxProfit(vector<int>& prices) {
//	int profit = 0, buyPrice = prices[0];
//	for (int i = 1; i < prices.size(); i++)
//	{
//		// keep buyPrice is minimum because profit is largest
//		if (buyPrice > prices[i])
//			buyPrice = prices[i];
//
//		profit = max(profit, prices[i] - buyPrice);
//	}
//
//	return profit;
//}

int maxProfit(vector<int>& prices) {
	int profit = 0, buyPrice = prices[0];
	for (int i = 1; i < prices.size(); i++)
	{
		// keep buyPrice is minimum because profit is largest
		buyPrice = min(buyPrice, prices[i]);
		profit = max(profit, prices[i] - buyPrice);
	}

	return profit;
}


int main() {
	cout << boolalpha;

	vector<int> a{ 7, 1, 5, 3, 6, 4 };
	cout << maxProfit(a) << '\n';

	vector<int> b{ 7,6,4,3,1 };
	cout << maxProfit(b) << '\n';

	vector<int> c{ 2,4,1 };
	cout << maxProfit(c) << '\n';

	vector<int> d{ 1 };
	cout << maxProfit(d) << '\n';

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
