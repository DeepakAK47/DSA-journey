// Find the number of minimum ways to reduce n to 0(dynamic approach from top to bottom)
// constraints : subtract the original number by maximum number which is present in the given digit ex 27 -> subtract this by 7
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int>dp;
vector<int>digit(int n){
    vector<int>answer;
    while(n>0){
        int d = n%10;
        if(d!=0) answer.push_back(d);
        n = n/10;
    }
    return answer;
}
// f(n)
int f(int n){
    if(n==0) return 0;
    if(n>=1 && n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
        // extracting all the ele of the vector
        vector<int>ele = digit(n);
        int val = INT_MAX;
        for(int i=0;i<ele.size();i++){
            val = min(val,f(n-ele[i]));
        }
    return dp[n] = 1 + val; // DOUBT
}
int main(){
int n;
cout<<"Enter the value of n : ";
cin>>n;
dp.clear();
dp.resize(n+1,-1);
int ans = f(n);
cout<<ans;
}