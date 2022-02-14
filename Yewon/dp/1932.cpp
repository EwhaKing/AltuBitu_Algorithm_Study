//
// Created by 반예원 on 2022/02/14.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> dp;
    vector<vector<int>> triangle;
    int n;
    int ans;

    cin >> n;
    triangle.assign(n+1,vector<int>(n+1,0));
    dp.assign(n+1,vector<int>(n+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> triangle[i][j];
        }
    }

    dp[1][1] = triangle[1][1];
    ans=dp[1][1] ;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){

            dp[i][j] = max(dp[i-1][j-1],dp[i-1][j]) +triangle[i][j];

            ans= max(ans,dp[i][j]);
        }
    }
    cout << ans ;

}