#include <iostream>

using namespace std;

const int SIZE = 8;

int n, m;
int num[SIZE]; 
bool check[SIZE + 1]; 

void backtrackg(int cnt) { 
    if (cnt == m) {
        for (int i = 0; i < cnt; i++)
            cout << num[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!check[i]) { 
            num[cnt] = i; 
            check[i] = true; 
            backtrackg(cnt + 1); 
            check[i] = false; 
        }

    }
}

int main() {
    cin >> n >> m;

    backtrackg(0);

    return 0;
}