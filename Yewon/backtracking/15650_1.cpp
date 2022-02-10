
#include <iostream>
#include <vector>
const int SIZE = 8;

int n, m;
int num[SIZE];
bool check[SIZE + 1];
bool check2[SIZE + 1];
using namespace std;
void backtracking(int cnt, int start) {
    if (cnt == m) {
        for (int i = 0; i < cnt; i++)
            cout << num[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = start; i <= n; i++) {
        num[cnt] = i;
        backtracking(cnt + 1, i + 1);
    }
}

int main() {
    //입력
    cin >> n >> m;

    //연산 + 출력
    backtracking(0, 1);

    return 0;
}