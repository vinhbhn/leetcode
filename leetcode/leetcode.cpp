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

// 0ms 8.2MB
class MyStack {
private:
    queue<int> q1, q2;
public:
    MyStack() {

    }

    void push(int x) {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {
        int temp = q1.front();
        q1.pop();
        return temp;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

// one queue
// https://leetcode.com/problems/implement-stack-using-queues/solutions/3969470/99-74-one-queue-approach/
// 0ms 8.2MB
class MyStack {
private:
    queue<int> q;
public:
    MyStack() {
    }

    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int temp = q.front();
        q.pop();
        return temp;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
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
