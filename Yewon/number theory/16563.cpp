//
// Created by banya on 2022-02-03.
//

#//
// Created by banya on 2022-02-03.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> primefac;
    int n,m;
    cin >> m;
    while(m--) {
        cin >> n;

        primefac.assign(n + 1, 0);

        for (int i = 2; i <= sqrt(n); i++) {

            if (primefac[i]==0) {
                for (int j = i*i; j <= n; j += i) {
                    if (primefac[j] != 0)
                        continue;
                    primefac[j] = i;
                }
            }
        }
        while (n > 0) {

            if (primefac[n] != 0){
                cout << primefac[n];
                n = n / primefac[n];
                }
            if (primefac[n] == 0){
                if(n==1)
                    break;
                cout <<n;
                break;
            }
        }
        cout << "\n";
    }
}