//
// Created by banya on 2022-02-17.
//

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int a,b,temp;
    int ans=0;
    temp=0;
    cin >> a >> b;
    vector<int> v;
    v.assign(a,0);
    for(int i=0;i<a;i++){


        cin >> v[i];
    }

    for(int i=a-1;i>=0;i--){
        if(v[i] <=b){

            temp=b/v[i];
            b=b-temp*v[i];
            ans+=temp;}

    }
    cout <<ans;

}