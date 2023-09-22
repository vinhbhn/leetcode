#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

// O(n^2)
//std::vector<int> getRow(int rowIndex) {
//	std::vector<std::vector<int>> result;
//	for (int i = 0; i < rowIndex + 1; i++)
//	{
//		std::vector<int> row(i + 1, 1);
//		for (int j{ 1 }; j < i; j++)
//		{
//			row[j] = result.back()[j - 1] + result.back()[j];
//		}
//		result.push_back(row);
//	}
//	return result[rowIndex]; // or result.back()
//}

// https://leetcode.com/problems/pascals-triangle-ii/solutions/3177710/best-c-2-solutions-ever-dp-tabulation-bottom-up-one-stop-solution/
// O(n)
std::vector<int> getRow(int rowIndex) {
	std::vector<int> output(rowIndex + 1, 0);
	output[0] = 1;
	for (int i = 0; i < rowIndex; i++) {
		for (int j = i + 1; j >= 1; j--) {
			output[j] += output[j - 1];
		}
	}
	return output;
}

int main()
{
	std::vector<int> a = getRow(3);
	for (int i : a)
	{
		std::cout << a[i] << ' ';
	}

	return 0;
}

