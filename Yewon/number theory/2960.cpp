//
// Created by banya on 2022-02-03.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> is_prime;
    int n,c;
    cin >> n >> c;

    int d=0;
    is_prime.assign(n+1,1);
    is_prime[0] = is_prime[1] = 0;

    for(int i=2 ;i<=n;i++){
        if(is_prime[i]){
            for(int j=i;j<=n;j+=i) {
                if(is_prime[j] == 0){
                   continue;

                }
                is_prime[j] = 0;
                d++;

                if(d==c){
                    cout << j;
                    break;
                }

            }
        }
    }
    return 0;

}