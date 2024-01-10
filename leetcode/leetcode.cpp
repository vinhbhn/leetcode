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

class ParkingSystem {
private:
	int m_big{};
	int m_medium{};
	int m_small{};
public:
	ParkingSystem(int big = 0, int medium = 0, int small = 0) : m_big{ big }, m_medium{ medium }, m_small{ small } {
	}

	bool addCar(int carType) {
		if (carType == 1)
		{
			if (m_big > 0)
			{
				m_big -= 1;
				return true;
			}
		}
		else if (carType == 2)
		{
			if (m_medium > 0)
			{
				m_medium -= 1;
				return true;
			}
		}
		else if (carType == 3)
		{
			if (m_small > 0)
			{
				m_small -= 1;
				return true;
			}
		}

		return false;
	}
};

// 52ms 33.5MB
class ParkingSystem {
private:
	int m_big{};
	int m_medium{};
	int m_small{};
public:
	ParkingSystem(int big = 0, int medium = 0, int small = 0) : m_big{ big }, m_medium{ medium }, m_small{ small } {
	}

	bool addCar(int carType) {
		if (carType == 1 and m_big > 0)
		{
			m_big -= 1;
			return true;
		}
		else if (carType == 2 and m_medium > 0)
		{
			m_medium -= 1;
			return true;
		}
		else if (carType == 3 and m_small > 0)
		{
			m_small -= 1;
			return true;
		}

		return false;
	}
};

// web 24ms real 56ms 33.4MB
class ParkingSystem {
private:
	int m_parking[3] = { 0 };
public:
	ParkingSystem(int big = 0, int medium = 0, int small = 0) {
		m_parking[0] = big;
		m_parking[1] = medium;
		m_parking[2] = small;
	}

	bool addCar(int carType) {
		if (m_parking[carType - 1])
		{
			--m_parking[carType - 1];
			return true;
		}

		return false;
	}
};

int main() {
	cout << boolalpha;

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
