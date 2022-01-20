//
// Created by banya on 2022-01-20.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<string,int> car;
    int n;
    string num;

    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> num;
        car[num]=i;
    }
    vector<int> seq;
    for (int i = 0; i < n; i++) {
        cin >> num;
        seq.push_back(car[num]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (seq[i] > seq[j]) {
                ans++;
                break;
            }
        }
    }
    cout << ans;
}