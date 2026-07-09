// Dice Combination(using DP top to bottom approach)
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define ll long long int
#define mod 1000000007
using namespace std;
vector<ll>dp;
ll f(int n){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    ll sum  =  0;
    for(int i=1;i<=6;i++){
        if((n-i)<0) break;
        sum = (sum%mod + f(n-i)%mod)%mod;
    }
    return dp[n] = sum;
}
int main(){
    int n;
    // Enter the sum required
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    ll ans = f(n);
    cout<<ans;
    return 0;
}
