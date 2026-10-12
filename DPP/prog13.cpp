// MCM (Amtrix chain multiplication)
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;
vector<vector<int>>dp;
int MCM(int i,int j,vector<int>&arr){
    if(i+1==j || i==j){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i+1;k<j;k++){
        ans  = min(ans,MCM(i,k,arr) + MCM(k,j,arr) + arr[i]*arr[j]*arr[k]);
    }
    return dp[i][j] = ans; // IMP
}
int main(){
    dp.clear();
    dp.resize(1005,vector<int>(1005,-1));
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int finAns = MCM(0,n-1,arr);
    cout<<finAns;
    return 0;
}