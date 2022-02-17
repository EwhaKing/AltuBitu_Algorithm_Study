//
// Created by banya on 2022-02-17.
//

#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
        priority_queue<long long, vector<long long>, greater<long long> >q;
        long long ans;
        vector<int> vec;
        int a;
        ans=0;


        cin >> a;

        for(int i=0;i<a;i++){
            int temp;
            cin >> temp;
            q.push(temp);

        }

        for(int i=0;i<a-1;i++){
            long long temp = 0;
            temp += q.top();
            q.pop();
            temp += q.top();
            q.pop();
            q.push(temp);
            ans += temp;

        }
        printf("%lld\n", ans);

    }
    return 0;
}