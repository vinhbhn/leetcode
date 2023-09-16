#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// count char from s.end() then count ' ' again so break or reach s.begin()
int lengthOfLastWord(std::string s) {
	int count{ 0 };

	for (int i{static_cast<int>(s.size()) - 1}; i >= 0; i--)
	{
		if (s[i] == ' ' && count > 0)
			break;

		if (s[i] != ' ')
			++count;
	}

	return count;
}

int main()
{
	std::cout << lengthOfLastWord("Hello World") << '\n';
	std::cout << lengthOfLastWord("   fly me   to   the moon  ") << '\n';
	std::cout << lengthOfLastWord("luffy is still joyboy") << '\n';
	std::cout << lengthOfLastWord("a") << '\n';
	std::cout << lengthOfLastWord("a ") << '\n';

	return 0;
}

