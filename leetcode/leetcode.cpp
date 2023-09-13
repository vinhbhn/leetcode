#include <iostream>
#include <vector>

int romanToInt(std::string s)
{
	int total{ 0 };

	for (int i{ 0 }; i < static_cast<int>(s.size()); ++i)
	{
		// if I before V is not count I and substract I (meaning IV = V - I)
		if (i > 0 && i < static_cast<int>(s.size()))
		{
			switch (s[i])
			{
			case 'I': { ++total; break; }
			case 'V': { if (s[i - 1] == 'I') { total -= 2; }; total += 5; break; }
			case 'X': { if (s[i - 1] == 'I') { total -= 2; }; total += 10; break; }
			case 'L': { if (s[i - 1] == 'X') { total -= 20; }; total += 50; break; }
			case 'C': { if (s[i - 1] == 'X') { total -= 20; }; total += 100; break; }
			case 'D': { if (s[i - 1] == 'C') { total -= 200; }; total += 500; break; }
			case 'M': { if (s[i - 1] == 'C') { total -= 200; }; total += 1000; break; }
			}
		}
		else
		{
			switch (s[i])
			{
			case 'I': { ++total; break; }
			case 'V': { total += 5; break; }
			case 'X': {  total += 10; break; }
			case 'L': { total += 50; break; }
			case 'C': { total += 100; break; }
			case 'D': { total += 500; break; }
			case 'M': { total += 1000; break; }
			}
		}

	}

	return total;
}


int main()
{

	std::cout << romanToInt("MCMXCIV") << '\n';
	std::cout << romanToInt("IV") << '\n';
	std::cout << romanToInt("LVIII") << '\n';
	std::cout << romanToInt("III") << '\n';

	return 0;
}

