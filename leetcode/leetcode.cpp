#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits)
{
	//int lastDigit = static_cast<int>(digits.size()) - 1;
	//// plus one
	//if (digits[lastDigit] == 9)
	//{
	//	bool allDigitIsNine{ true };
	//	// check if all digit is 9
	//	for (int i{ 0 }; i < lastDigit; ++i)
	//	{
	//		if (digits[i] != 9)
	//			allDigitIsNine = false;
	//	}

	//	// 9, 99, 999 -> 10, 100, 1000
	//	if (allDigitIsNine) {
	//		digits.insert(digits.begin(), 1);
	//		for (int i{ 1 }; i < static_cast<int>(digits.size()); ++i)
	//			digits[i] = 0;
	//	}
	//	else
	//	{
	//		digits.at(lastDigit) = 0;
	//		digits.at(lastDigit - 1) += 1;
	//	}
	//}
	//else
	//digits.at(lastDigit) += 1;

	bool currentDigitIsTen{ false };
	int lastDigit = static_cast<int>(digits.size()) - 1;
	for (int i{ lastDigit }; i >= 0; --i)
	{
		if (i == lastDigit || currentDigitIsTen == true)
		{
			++digits[i];
			currentDigitIsTen = false;
		}

		if (digits[i] == 10)
		{
			digits[i] = 0;

			// first Digit = 1, after first Digit is all 0
			if (i == 0)
				digits.insert(digits.begin(), 1);

			currentDigitIsTen = true;
		}
		
	}

	return digits;
}



int main()
{
	std::vector<int> test{ 9,9 };
	plusOne(test);
	for (int i{0}; i < static_cast<int>(test.size()); ++i)
		std::cout << test[i] << ' ';

	return 0;
}

