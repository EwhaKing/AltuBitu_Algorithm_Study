/*
*220124
*이주연
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;
const int SIZE = 10000;

int top_pointer = -1;
vector<int> stack_vec(SIZE);

bool empty() {
    return top_pointer == -1;
}

bool full() {
    return top_pointer == SIZE - 1;
}

void push(int k) {
    stack_vec[++top_pointer] = k;
}

int pop() {
    return stack_vec[top_pointer--];
}

int size() {
    return top_pointer + 1;
}

int top() {
    return stack_vec[top_pointer];
}

int main() {
    int n, k;
    string cmd;
    stack<int> s;

    cin >> n;
    while (n--) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> k;
            //            if (!full()) //라이브러리 사용시 필요없음
            //                s.push(k);
            s.push(k);
            continue;
        }
        if (cmd == "pop") {
            if (s.empty())
                cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
            continue;
        }
        if (cmd == "size") {
            cout << s.size() << '\n';
            continue;
        }
        if (cmd == "empty") {
            cout << s.empty() << '\n';
            continue;
        }
        if (cmd == "top") {
            if (s.empty())
                cout << -1 << '\n';
            else
                cout << s.top() << '\n';
            continue;
        }
    }

    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
}