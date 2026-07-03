// Find the number of ways to reduce n to 1(Using DP top to dowm approach) 
// method 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<climits>
vector<int>dp;
int ftd(int n){
    int x = INT_MAX;
    if(n==1) return 0;
    if(n==2 || n==3 ) return 1;
    if(dp[n]!=-1) return dp[n];
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