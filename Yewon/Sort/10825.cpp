//
// Created by banya on 2022-01-18.
//


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct info{
    string a;
    int b;
    int c;
    int d;
};
bool cmpadv(const info &i1, const info &i2) {
    if (i1.b != i2.b) //국어 점수가 다르다면 감소하는 순서
        return i1.b > i2.b;
    if (i1.c != i2.c) //영어 점수가 다르다면 증가하는 순서
        return i1.c < i2.c;
    if (i1.d != i2.d) //수학 점수가 다르다면 감소하는 순서
        return i1.d > i2.d;
    return i1.a < i2.a; //이름이 사전 순으로 증가하는 순서
}

int main() {
    int n;
    vector<info> num;

    cin >> n;
    num.assign(n, {});

    for (int i = 0; i < n; i++)
        cin >> num[i].a >> num[i].b >> num[i].c >> num[i].d ;

    sort(num.begin(), num.end(),cmpadv);

    for (int i = 0; i < n; i++)
        cout <<  num[i].a <<'\n';
}