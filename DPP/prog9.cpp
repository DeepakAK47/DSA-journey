// C vacation problem(Atcoder)
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    // define 2D vector
    vector<vector<int>>dp(n,vector<int>(3,0));
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;
    for(int i=1;i<n;i++){
        cin>>a>>b>>c;
        dp[i][0] = a+ max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = b+ max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = c+ max(dp[i-1][0],dp[i-1][1]);
    }
    int ans = max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    cout<<ans;
}