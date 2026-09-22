// WAP to print all the subsequences of the given array
#include<iostream>
#include<vector>
void helper(vector<int>arr,vector<int>&ans,int idx){
    if(idx==arr.size()){
        cout<<ans<<" ";
        return;
    }
    helper(arr,ans,idx+1);
    ans.push_back(arr[idx]);
    helper(arr,ans,idx+1);
}
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5};
    vector<int>ans;
    helper(arr,ans,0);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    return 0;
}