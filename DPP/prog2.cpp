// Find the number of ways to reduce n to 1(Using DP top to dowm approach) 
// constrait : if the n is divisible by 3 or 2 then devide the number else suntract n by 1
// method 2
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int>dp;
int ftd(int n){
    int x = INT_MAX;
    if(n==1) return 0;
    if(n==2 || n==3 ) return 1;
    if(dp[n]!=-1) return dp[n];  // IMP line reuse pre calculated values
    return dp[n] = 1+min({ftd(n-1),(n%2==0) ? ftd(n/2):x,(n%3==0) ? ftd(n/3):x}); 
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    dp.clear();
    dp.resize(n+1,-1);
    cout<<ftd(n)<<" ";
    return 0;
}