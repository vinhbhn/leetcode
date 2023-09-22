#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>


// use fibonacci number with n > 2
// u(n) = u(n-1) + u(n-2)
//std::vector<std::vector<int>> generate(int numRows) {
//	std::vector<int> vectorTemp{ 1 }, vectorFilled{};
//	std::vector<std::vector<int>> ans{};
//	int row{ 1 };
//
//	ans.push_back(vectorTemp);
//	++row; // = 2
//	if (numRows == 1)
//		return ans;
//
//	vectorTemp.push_back(1); // {1,1}
//	ans.push_back(vectorTemp);
//	++row; // = 3 
//	if (numRows == 2)
//		return ans;
//
//
//	// numRows > 2
//	vectorFilled = vectorTemp;
//	for (row; row <= numRows; row++)
//	{ 
//		vectorTemp = vectorFilled;
//		// add 0 to last element to 2 vector equal size, above row = bottom row
//		vectorTemp.push_back(0);
//		// i = 0, i = end; default value to 1
//		for (int i{ 1 }; i <= row; i++)
//		{
//			vectorFilled[i] = vectorTemp[i - 1] + vectorTemp[i];
//		}
//		ans.push_back(vectorFilled);
//	}
//
//	return ans;
//}

// https://leetcode.com/problems/pascals-triangle/solutions/4016203/three-approaches-beginner-friendly-full-explanation-c-java-python/
// recursion
std::vector<std::vector<int>> generate(int numRows) {
	if (numRows == 0) return {};
	if (numRows == 1) return { {1} };

	std::vector<std::vector<int>> prevRows = generate(numRows - 1);
	std::vector<int> newRow(numRows, 1);

	for (int i{ 1 }; i < numRows - 1; i++)
	{
		newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
	}

	prevRows.push_back(newRow);
	return prevRows;
}
// combinatorial formula
std::vector<std::vector<int>> generate(int numRows) {
	std::vector<std::vector<int>> result;
	for (int i = 0; i < numRows; i++)
	{
		std::vector<int> row(i + 1, 1);
		for (int j{ 1 }; j < i; j++)
		{
			row[j] = result.back()[j - 1] + result.back()[j];
		}
		result.push_back(row);
	}
	return result;
}
// using dynamic programming with 1D array
std::vector<std::vector<int>> generate(int numRows) {
	std::vector<std::vector<int>> result;
	std::vector<int> prevRow;
	for (int i{ 0 }; i < numRows; i++)
	{
		std::vector<int> currentRow(i + 1, 1);

		for (int j{ 1 }; j < i; j++)
			currentRow[j] = prevRow[j - 1] + prevRow[j];

		result.push_back(currentRow);
		prevRow = currentRow;
	}

	return result;
}

int main()
{


	return 0;
}

