//
// Created by 반예원 on 2022/02/14.
//

//
// Created by 반예원 on 2022/02/14.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int ans;
    vector<int> dp;
    vector<int> gd;
    int n;
    cin >> n;
    gd.assign(n+1,0);
    dp.assign(n+1,0);

    for(int i=1;i<=n;i++){
        cin >> gd[i];

    }
    dp[1] = gd[1];
    dp[2] = gd[1]+gd[2];
    dp[3] = gd[1]+gd[3];
    ans=dp[1];

    for(int i=4;i<=n;i++){

            dp[i] = max(dp[i-2],dp[i-3]+gd[i-1]) +gd[i];

            ans= max(ans,dp[i]);

        }

    cout << ans;

}