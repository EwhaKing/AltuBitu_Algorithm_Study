//
// Created by banya on 2022-02-03.
//
#include <iostream>

using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int c,d;
    if(a>b)
    {c=a;
        d=b;}
    if(a<b)
    {c=b;
        d=a;}
    while(d){
        int t = c % d;
        c = d;
        d = t;
    }
    cout << c << "\n";
    cout << (a*b)/c;
}
