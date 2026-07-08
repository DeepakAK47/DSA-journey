// find the minimum number of coins required for getting the desired sum(Recursive approach)
// If it is not possible to achive the desired sum then return -1
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>coins;
vector<int>dp(1000006,-2);
// optimize function
int f(int x){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x]; // this check the condition whether it is pre computed or not
    int result = INT_MAX;
    for(int i=0;i<coins.size();i++){
        if((x-coins[i]) < 0) continue;
        result = min(result,f(x-coins[i]));
    }
    if(result==INT_MAX) return dp[x] = INT_MAX;
    return dp[x] = 1+result;  // f(5) = 1 + f(4) = 1 + 4 = 5
}
int main(){
    // n is the number of coins
    int n;
    cin>>n;
    // desired sum
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        coins.push_back(val);
    }
    int ans = f(x);
    if(ans==INT_MAX) cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return 0;
}
// dry run : 

// f(11)
// ├── i=0: f(10)
// │   ├── i=0: f(9)
// │   │   ├── i=0: f(8)
// │   │   │   ├── i=0: f(7)
// │   │   │   │   ├── i=0: f(6)
// │   │   │   │   │   ├── i=0: f(5)
// │   │   │   │   │   │   ├── i=0: f(4)
// │   │   │   │   │   │   │   ├── i=0: f(3)
// │   │   │   │   │   │   │   │   ├── i=0: f(2)
// │   │   │   │   │   │   │   │   │   ├── i=0: f(1)
// │   │   │   │   │   │   │   │   │   │   ├── i=0: f(0) = 0 (base case)
// │   │   │   │   │   │   │   │   │   │   ├── i=1: skip (1-5 < 0)
// │   │   │   │   │   │   │   │   │   │   ├── i=2: skip (1-7 < 0)
// │   │   │   │   │   │   │   │   │   │   └── result=0 → dp[1] = 1
// │   │   │   │   │   │   │   │   │   ├── i=1: skip (2-5 < 0)
// │   │   │   │   │   │   │   │   │   ├── i=2: skip (2-7 < 0)
// │   │   │   │   │   │   │   │   │   └── result=f(1)=1 → dp[2] = 2
// │   │   │   │   │   │   │   │   ├── i=1: skip (3-5 < 0)
// │   │   │   │   │   │   │   │   ├── i=2: skip (3-7 < 0)
// │   │   │   │   │   │   │   │   └── result=f(2)=2 → dp[3] = 3
// │   │   │   │   │   │   │   ├── i=1: skip (4-5 < 0)
// │   │   │   │   │   │   │   ├── i=2: skip (4-7 < 0)
// │   │   │   │   │   │   │   └── result=f(3)=3 → dp[4] = 4
// │   │   │   │   │   │   ├── i=1: f(0) = 0 (base case, x-5=0)
// │   │   │   │   │   │   ├── i=2: skip (5-7 < 0)
// │   │   │   │   │   │   └── result=min(f(4)=4, f(0)=0)=0 → dp[5] = 1
// │   │   │   │   │   ├── i=1: f(1) = 1 [CACHED]
// │   │   │   │   │   ├── i=2: skip (6-7 < 0)
// │   │   │   │   │   └── result=min(f(5)=1, f(1)=1)=1 → dp[6] = 2
// │   │   │   │   ├── i=1: f(2) = 2 [CACHED]
// │   │   │   │   ├── i=2: f(0) = 0 (base case, x-7=0)
// │   │   │   │   └── result=min(f(6)=2, f(2)=2, f(0)=0)=0 → dp[7] = 1
// │   │   │   ├── i=1: f(3) = 3 [CACHED]
// │   │   │   ├── i=2: f(1) = 1 [CACHED]
// │   │   │   └── result=min(f(7)=1, f(3)=3, f(1)=1)=1 → dp[8] = 2
// │   │   ├── i=1: f(4) = 4 [CACHED]
// │   │   ├── i=2: f(2) = 2 [CACHED]
// │   │   └── result=min(f(8)=2, f(4)=4, f(2)=2)=2 → dp[9] = 3
// │   ├── i=1: f(5) = 1 [CACHED]
// │   ├── i=2: f(3) = 3 [CACHED]
// │   └── result=min(f(9)=3, f(5)=1, f(3)=3)=1 → dp[10] = 2
// ├── i=1: f(6) = 2 [CACHED]
// ├── i=2: f(4) = 4 [CACHED]
// └── result=min(f(10)=2, f(6)=2, f(4)=4)=2 → dp[11] = 3