
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, b, c;
    long long result = 0;

    cin >> n;
    vector<int> student(n);
    for (int i = 0; i < n; i++)
        cin >> student[i];
    cin >> b >> c;
    for (int i = 0; i < n; i++) {
        int cnt = student[i];


        result++;
        cnt -= b;
        if (cnt <= 0)
            continue;
        result += (cnt / c);
        if (cnt % c != 0)
            result++;
    }

    //출력
    cout << result;
}