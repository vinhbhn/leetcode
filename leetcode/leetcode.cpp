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

// 96ms 184.65MB
class MyHashSet {
public:
    vector<int> v;

    MyHashSet() {
        v.resize(1e6 + 1, 0);
    }

    void add(int key) {
        v[key] = 1;
    }

    void remove(int key) {
        v[key] = 0;
    }

    bool contains(int key) {
        return (v[key] == 1);
    }
};

// 59ms 44MB
class MyHashSet {
private:
    vector<bool> v;

public:
    MyHashSet() {
        v.resize(1e6 + 1, false);
    }

    void add(int key) {
        v[key] = true;
    }

    void remove(int key) {
        v[key] = false;
    }

    bool contains(int key) {
        return (v[key] == true);
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
