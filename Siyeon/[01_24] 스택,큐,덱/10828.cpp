#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int num, i, pushCnt;
    string input;
    stack<int> sk;
    cin >> num;

    for (i = 0; i < num; i++) {
        cin >> input;
        if (input == "push") {
            cin >> pushCnt;
            sk.push(pushCnt);
        }
        else if (input == "top") {
            if (sk.empty()) cout << "-1" << "\n";
            else cout << sk.top() << "\n";
        }
        else if (input == "pop") {
            if (sk.empty()) cout << "-1" << "\n";
            else {
                cout << sk.top() << "\n";
                sk.pop();
            }
        }
        else if (input == "empty") {
            if (sk.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
        }
        else {
            cout << sk.size() << "\n";
        }
    }
    return 0;
}
