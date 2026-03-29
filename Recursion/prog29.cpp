//*** Print all the subsequence of length k from first n natural numbers.
// Note All Subsequences of length 3 from [1,2,3,4,5]:
// To find subsequences of length 3, I need to choose 3 elements while maintaining their original order.

// Complete List:
// [1,2,3] - positions (0,1,2)
// [1,2,4] - positions (0,1,3)
// [1,2,5] - positions (0,1,4)
// [1,3,4] - positions (0,2,3)
// [1,3,5] - positions (0,2,4)
// [1,4,5] - positions (0,3,4)
// [2,3,4] - positions (1,2,3)
// [2,3,5] - positions (1,2,4)
// [2,4,5] - positions (1,3,4)
// [3,4,5] - positions (2,3,4)
// Note -->  All the element must maintain their relative order.

#include<iostream>
#include<vector>
using namespace std;
void subSeq(int arr[],int size, vector<int>ans,int idx){
if(idx==size){
for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";    
}
cout<<endl;
return;
}
subSeq(arr,size,ans,idx+1);
ans.push_back(arr[idx]);
subSeq(arr,size,ans,idx+1);

}
int main(){

    vector<int>ans;
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    subSeq(arr,size,ans,0);
    return 0;
}
  
