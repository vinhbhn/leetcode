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

// too slow
class MyHashMap {
private:
	vector<vector<int>> v;
public:
	MyHashMap() {
		v.resize(1e6 + 1, { 0,0 });
	}

	void put(int key, int value) {
		v[key] = { key, value };
	}

	int get(int key) {
		return (v[key][0] > 0) ? v[key][1] : -1; // return value or -1
	}

	void remove(int key) {
		v[key] = { 0,0 };
	}
};

// 156ms 313.1MB my overthinking
class MyHashMap {
private:
	vector<pair<bool, int>> v;
public:
	MyHashMap() {
		v.resize(1e6 + 1, { false,0 });
	}

	void put(int key, int value) {
		v[key] = { true, value };
	}

	int get(int key) {
		return (v[key].first == true) ? v[key].second : -1; // return value or -1
	}

	void remove(int key) {
		v[key] = { false,0 };
	}
};

// 156ms 313.1MB
class MyHashMap {
private:
	vector<pair<bool, int>> v;
public:
	MyHashMap() {
		v.resize(1e6 + 1, { false, -1 });
	}

	void put(int key, int value) {
		v[key] = { true, value };
	}

	int get(int key) {
		return v[key].second; // return value or -1
	}

	void remove(int key) {
		v[key] = { false, -1 };
	}
};

//https://leetcode.com/problems/design-hashmap/solutions/4126960/c-easy-o-n-solution-day-4-daily-challenge/
// 119ms 212.9MB
class MyHashMap {
private:
	vector<int> v;
public:
	MyHashMap() {
		v.resize(1e6 + 1, -1);
	}

	void put(int key, int value) {
		v[key] = value;
	}

	int get(int key) {
		return v[key]; // return value or -1
	}

	void remove(int key) {
		v[key] = -1;
	}
};



int main() {
	cout << boolalpha;

	return 0;
}

//#define need_for_speed ios_base::sync_with_stdio(false); cin.tie(NULL);
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);
