// CSES Removing Digit problem(method 1 : without DP)
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int step = 0;
//     while(num!=0){
//         string str = to_string(num);
//         int ans = INT_MIN;
//         for(int i=0;i<str.size();i++){
//             int val = str[i] - '0';
//             if(val>ans){
//                 ans = val;
//             }
//         }
//         num = num - ans;
//         step++;
//     }
//     cout<<step;  
//     return 0;
// }

// method 2 : Top to down approach(memoisation)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>dp;

void getDigit(int n,vector<int>&digits){
    while(n>0){
        if(n!=0){
            digits.push_back(n%10);
        }
        n = n/10;
    }
}

int ans(int n){
    if(n<=9) return 1;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    vector<int>digits;
    getDigit(n,digits);
    int result  = INT_MAX;
    for(int i=0;i<digits.size();i++){
        result = min(result,n-digits[i]);
    }
    return dp[n] = 1+result;
    }

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    int finAns = ans(n);
    cout<<finAns;
    
    return 0;
}