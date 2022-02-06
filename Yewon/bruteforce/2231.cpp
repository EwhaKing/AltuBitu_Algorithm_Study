//
// Created by banya on 2022-02-06.
//

#include <iostream>

using namespace std;
int hap(int a){
    int b=a;;
    int c=0;
    while(a>0){
        c=c+a%10;
        a = a/10;

    }
    return b+c;
}
int main(){
    int n;
    cin >>n;
    for(int i=1;i<=1000000;i++){
        if(hap(i)==n)
        {cout << i;
            return 0;
            break;

        }


    }

    cout << 0;
}

