//
// Created by 반예원 on 2022/02/14.
//

#include <iostream>

using namespace std;
int f(int n){
    if(n<=1)
        return n;
    return f(n-1)+f(n-2);

}
int main(){
    int n;
    int total;
    cin >> n;
    cout << f(n);

}