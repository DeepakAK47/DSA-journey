// find the minimum number of coins required for getting the desired sum(Recursive approach)
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// recursive function
int f(vector<int>&coins,int sum){
    
}
int main(){
    int n; // number of coins
    cout<<"Enter the number of coins : ";
    cin>>n;
    vector<int>coins;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        coins.push_back(x);
    }
// desired sum
int sum;
cout<<"Enter the desired sum : ";
cin>>sum;
// finding the minimum number of coins are required to get the desired sum
int ans  = f(coins,sum);
cout<<ans;
    return 0;
}