//
// Created by banya on 2022-01-18.
//


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n;
    vector<int> num;

    cin >> n;
    num.assign(n, 0);
    for (int i = 0; i < n; i++)
        cin >> num[i];

    sort(num.begin(), num.end());

    for (int i = 0; i < n; i++)
        cout << num[i] << '\n';
}