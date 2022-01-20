/*
* 220117
* ¿Ã¡÷ø¨
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

void bubbleSort(int n) {
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (arr[j - 1] > arr[j]) {
                int temp = arr[j - 1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            cnt++;
        }
    }
    cout << "Count : " << cnt << '\n';
}

int main() {
    int n;

    cin >> n;
    arr.assign(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';
}
