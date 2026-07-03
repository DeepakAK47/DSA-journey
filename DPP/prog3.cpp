// Find the number of ways to reduce n to 1(Using DP bottom to top approach) 
// method 3
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int>dp;
int fbt(int n){
    int x = INT_MAX;
    dp.resize(n+1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i=4;i<=n;i++){
    dp[i] = 1+min({dp[i-1],(i%2==0) ? dp[i/2]:x,(i%3==0) ? dp[i/3]:x}); 
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<fbt(n)<<" ";
    return 0;
}
