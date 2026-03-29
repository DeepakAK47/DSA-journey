// Find all the subArray of the given array
// Note --> It depends on the sequnce of the values
// Formula: For array of size n, total subarrays = n×(n+1)/2
// ***
#include<iostream>
#include<vector>
using namespace std;
void subArray(int arr[], vector<int> ans, int size, int idx){
    if(idx==size){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    subArray(arr,ans,size,idx+1);
    if(ans.size()==0){
    ans.push_back(arr[idx]);
    subArray(arr,ans,size,idx+1);
}
else if(ans[ans.size()-1]==arr[idx-1]){
    ans.push_back(arr[idx]);
    subArray(arr,ans,size,idx+1);
}
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    bool flag = true;
    subArray(arr,ans,size,0);
    return 0;
}