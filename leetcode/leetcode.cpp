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

// terrible
//std::vector<int> arrayRankTransform(std::vector<int>& arr) {
//	std::vector<int> temp = arr, result;
//
//	std::sort(temp.begin(), temp.end());
//
//	int j = 0, c = 0;
//	for(int i = 0; i < arr.size(); i++)
//	{
//		while (j < temp.size())
//		{
//			
//			if (arr[i] > temp[j])
//			{
//				c++;
//				// avoid two elements equal, not count
//				if (temp[j] == temp[j + 1])
//				{
//					j++;
//				}
//				j++;
//				
//			}
//			if (arr[i] == temp[j])
//			{
//				break;
//			}
//		}
//		result.push_back(c+1);
//		// reset
//		j = 0;
//		c = 0;
//	}
//	return result;
//}

// slow
//std::vector<int> arrayRankTransform(std::vector<int>& arr) {
//	std::vector<int> temp = arr, result;
//
//	std::sort(temp.begin(), temp.end());
//	// remove the elements equal
//	auto adjacent = std::unique(temp.begin(), temp.end());
//	temp.erase(adjacent, temp.end());
//
//	int j = 0;
//	for (int i = 0; i < arr.size(); i++)
//	{
//		while (true)
//		{
//			if (arr[i] == temp[j])
//			{
//				result.push_back(j + 1);
//				break;
//			}
//			j++;
//		}
//
//		// reset
//		j = 0;
//
//	}
//	return result;
//}

// mid
//std::vector<int> arrayRankTransform(std::vector<int>& arr) {
//	std::vector<int> temp = arr, result;
//
//	std::sort(temp.begin(), temp.end());
//	// remove the elements equal
//	auto adjacent = std::unique(temp.begin(), temp.end());
//	temp.erase(adjacent, temp.end());
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		auto pos = std::find(temp.begin(), temp.end(), arr[i]);
//		result.push_back(std::distance(temp.begin(), pos) +1);
//	}
//	return result;
//}

// mid
//std::vector<int> arrayRankTransform(std::vector<int>& arr) {
//	std::vector<int> temp = arr, result;
//
//	std::sort(temp.begin(), temp.end());
//	// remove the elements equal using set
//	std::set<int> s;
//	for (auto i : arr)
//		s.insert(i);
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		auto pos = std::find(temp.begin(), temp.end(), arr[i]);
//		result.push_back(std::distance(temp.begin(), pos) +1);
//	}
//	return result;
//}

//https://leetcode.com/problems/rank-transform-of-an-array/solutions/1677596/3-simple-c-solution/
// using set and map
//std::vector<int> arrayRankTransform(std::vector<int>& arr) {
//	std::map<int, int> mp;
//	std::set<int> s;
//	for (int i = 0; i < arr.size(); i++)
//		s.insert(arr[i]); // making set that contains unique element in sorted order
//	int rank = 1;
//	for (auto& i : s)
//	{
//		mp[i] = rank;
//		rank++; // assigning rank to unique elements
//	}
//	for (int i = 0; i < arr.size(); i++)
//		arr[i] = mp[arr[i]];
//
//	return arr;
//}
// using map and sorting
//std::vector<int> arrayRankTransform(std::vector<int>& arr) {
//	std::map<int, int> mp;
//	std::vector<int> temp = arr;
//	int rank = 1;
//	// sorting the array
//	std::sort(temp.begin(), temp.end());
//	// deleting repeated element
//	auto it = std::unique(temp.begin(), temp.end());
//	temp.resize(std::distance(temp.begin(), it));
//	// assigning rank
//	for (int i = 0; i < temp.size(); i++)
//	{
//		mp[temp[i]] = rank;
//		rank++;
//	}
//	for (int i = 0; i < arr.size(); i++)
//	{
//		arr[i] = mp[arr[i]];
//	}
//	
//
//	return arr;
//}
// using map
std::vector<int> arrayRankTransform(std::vector<int>& arr) {
	std::map<int, int> mp;
	for (auto& i : arr)
	{
		mp[i] = 0;
	}
	int rank = 0;
	for (auto& it : mp)
	{
		mp[it.first] = ++rank;
	}
	for (int i = 0; i < arr.size(); i++)
		arr[i] = mp[arr[i]];
	return arr;
}


int main()
{
	std::vector<int> arr = { 37,12,28,9,100,56,80,5,12 };
	for (auto& x : arrayRankTransform(arr))
		std::cout << x << ' ';


	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
