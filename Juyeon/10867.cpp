/*
* 220120
* ���ֿ�
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, k;
    set<int> s;

    cin >> n;
    while (n--) {
        cin >> k;
        s.insert(k);
    }

    for (auto iter = s.begin(); iter != s.end(); iter++)
        cout << *iter << ' ';
}