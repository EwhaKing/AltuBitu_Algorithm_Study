#include <iostream>
#include <set>

using namespace std;

int main() {
    int num, i, tmp;
    set<int> s;
    cin >> num;
    for (i = 0; i < num; i++) {
        cin >> tmp;
        s.insert(tmp);
    }

    set<int>::iterator iter;
    for (iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << ' ';
    }


}