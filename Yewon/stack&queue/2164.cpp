//
// Created by banya on 2022-01-24.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> st;
    int a;
    cin >> a;
    for (int i = 1; i <=a; i++) {
        st.push(i);
    }

    while (st.size()!=1) {
        st.pop();
        st.push(st.front());
        st.pop();

    }
    while (!st.empty()) {
       cout << st.front();
       st.pop();
  }
}