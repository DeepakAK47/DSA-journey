// Dice Combination(CSES problem) 
#include<iostream>
#include<vector>
#define mod 1000000007
using namespace std;
vector<long long>dp;

long long ans(long long sum){
    long long totalSum = 0;
    if(sum==0) return 1;
    if(dp[sum]!=-1) return dp[sum];
    for(int i=1;i<=6;i++){
        if(sum-i >= 0){
          totalSum = (totalSum +  ans(sum-i))%mod; //IMP
        }
    }
    return dp[sum] = totalSum;
}
int main(){
    dp.clear(); 
    dp.resize(1000005,-1);
    long long sum;
    cin>>sum;
    long long finAns = ans(sum);
    cout<<finAns;
    return 0;
}
