#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

std::string addBinary(std::string a, std::string b) {
	bool carry{ false };

	if (a.size() > b.size())
	{
		while (a.size() != b.size())
		{
			b = '0' + b;
		}
	}
	else if (a.size() < b.size())
	{
		while (a.size() != b.size())
		{
			a = '0' + a;
		}
	}

	std::string ans{ a };
	for (int i{ static_cast<int>(ans.size()) - 1 }; i >= 0; i--)
	{
		if (a[i] == '1')
		{
			if (b[i] == '1')
			{
				if (carry)
				{
					//ans[i] = '1'; = a[i]
					// carry still true
					continue;
				}

				ans[i] = '0';
				carry = true;
			}
			else // b[i] = 0
			{
				if (carry)
				{
					ans[i] = '0';
					continue;
				}

				//ans[i] = a[i];
			}
		}

		// a[i] = '0'
		if (b[i] == '1')
		{
			if (carry)
			{
				//ans[i] = '0'; = a[i]
				// carry still true
				continue;
			}

			ans[i] = b[i];
		}
		else // b[i] = 0
		{
			if (carry)
			{
				ans[i] = '1';
				carry = false;
				continue;
			}

			//ans[i] = a[i]; // because init ans = a
		}
	}

	if (carry)
		ans = '1' + ans;

	return ans;
}



int main()
{
	std::cout << addBinary("1010", "1011") << '\n';
	std::cout << addBinary("11", "1") << '\n';
	std::cout << addBinary("1", "111") << '\n';
	std::cout << addBinary("1111", "1111") << '\n';



	return 0;
}

