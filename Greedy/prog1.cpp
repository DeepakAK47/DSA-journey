// Implementation of fractional knapsack
// IMP
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool cmp(pair<int,int>&p1,pair<int,int>&p2){
    double r1 = (p1.first)/p1.second;
    double r2 = p2.first/p2.second;
    return r1 > r2;
}
double fractionalKnalsack(vector<int>&profit,vector<int>&weight,int W,int n){
    // profit and weight pair vector
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back({profit[i],weight[i]});
    }
    sort(arr.begin(),arr.end(),cmp);
    double result = 0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=W){
            result = result + arr[i].first;
            W = W-arr[i].second;
        }
        else{
            result = result + (arr[i].first*W)/arr[i].second;
            W=0;
            break;
        }
    }
    return result;
}
int main(){
    vector<int>profit = {60,100,120};
    vector<int>weight = {10,20,30};
    int W = 50;
    int n = 3;
    cout<<fractionalKnalsack(profit,weight,W,n);
    return 0;
}
