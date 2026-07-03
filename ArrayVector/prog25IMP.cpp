// Finding the next permutation of the given array
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    vector<int>v;
    int n,p;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the element of the vector : ";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the elements of the vector are : ";
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int pivot = -1;
    for(int i = n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        sort(v.begin(),v.end());
        for(int i = 0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    else{
    sort(v.begin()+pivot+1,v.end());
    for(int i = pivot+1;i<n;i++){
        if(v[i]>v[pivot]){
            p = v[i];
            break;
        }
    }
    int temp = v[pivot];
    v[pivot] = p;
    p = temp;
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
    return 0;
}



// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int pivot = -1;
//         for(int i = n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 pivot = i;
//                 break;
//             }
//         }
//         if(pivot== -1){
//             sort(nums.begin(),nums.end());
//         }
//         else{
//             sort(nums.begin()+pivot+1,nums.end());
//             for(int i = pivot+1;i<n;i++){
//                 if(nums[i]>nums[pivot]){
//                     swap(nums[i],nums[pivot]);
//                     break;
//                 }
//             }
//         }

//     }
// };