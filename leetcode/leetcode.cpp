#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//int mySqrt(int x) {
//	if (x == 1 || x == 0)
//		return x;
//
//	int i{ 2 };
//	unsigned long long cal{ 0 };
//	while (i <= x)
//	{
//		cal = i * i;
//		if (cal == x)
//			return i;
//
//		if (cal > x)
//			return i - 1;
//
//		++i;
//	}
//
//	return i;
//}

int mySqrt(int x) {
    if (x == 1 || x == 0)
        return x;

    int i{ 2 };
    while (i <= x)
    {
        if (x / i == i)
            return i;
        else if (x / i < i)
            return i - 1;

        ++i;
    }

    return i;
}

// https://leetcode.com/problems/sqrtx/solutions/
int mySqrt(int x) {
    if (x == 0)
        return x;
    int first = 1, last = x;
    int mid{ -1 };
    while (first <= last) {
        mid = first + (last - first) / 2;
        // mid * mid == x gives runtime error
        if (mid == x / mid)
            return mid;
        else if (mid > x / mid) {
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }
    return last;
}

int main()
{
	std::cout << mySqrt(2) << '\n';
	std::cout << mySqrt(4) << '\n';
	std::cout << mySqrt(8) << '\n';
	std::cout << mySqrt(16) << '\n';
	std::cout << mySqrt(46431) << '\n';
	std::cout << mySqrt(2147483647) << '\n';



	return 0;
}

