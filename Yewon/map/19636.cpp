
//
// Created by banya on 2022-01-20.
//

#include <iostream>

using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c;
    cin >> d >> e >> f;

    int a2=a;
    int b2=b;
    int flag;

    for(int i=0;i<d;i++)
    {
        a=a+(e-(b2+f));
        a2=a2+(e-(b+f));

        if(abs(e-(b+f))>c)
            b=b+floor((double)(e-(b+f))/2);
        if(b<=0 || a<=0)
            flag=3;


    }
    if(b2-b > 0)
    {flag=1;}

    cout << a <<" " <<b2 <<"\n";
    cout << a2 << " " << b << " ";
    if(flag==1) {
        cout << "YOYO";
        }
    else if(flag==3)
    {cout << "Danger Diet";

    }
    else
        cout << "NO";


}