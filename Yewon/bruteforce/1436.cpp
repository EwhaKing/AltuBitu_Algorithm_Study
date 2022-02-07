//
// Created by 반예원 on 2022/02/07.
//

#include <iostream>

using namespace std;


int endNumber(int n) {
    int cnt = 0;
    for (int i = 666;; i++) {
        string s = to_string(i);
        if (s.find("666") != s.npos)
            cnt++;
        if (cnt == n)
            return i;
    }
}

int main() {
    int n;


    cin >> n;


    cout << endNumber(n) << '\n';

    return 0;
}