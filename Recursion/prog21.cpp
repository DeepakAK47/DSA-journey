// Printing the subset of the array using recurssion
#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int size,int idx,vector<int>ans){
    if(idx==size){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    //  these three lines are the soul of this problem.
    subset(arr,size,idx+1,ans);
    ans.push_back(arr[idx]);
    subset(arr,size,idx+1,ans);
}
int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]); 
    vector<int>v;
    subset(arr,size,0,v);
    return 0;
}     

// Dry run  
// I'll walk you through this array subset generation code step by step. This code generates all possible subsets of an array using recursion.

// Code Analysis
// Function: subset(int arr[], int size, int idx, vector<int> ans)

// arr[]: The input array [1,2,3]
// size: Length of array (3)
// idx: Current index being processed
// ans: Current subset being built
// Step-by-Step Execution Trace
// Initial Call: subset([1,2,3], 3, 0, [])
// Step 1: subset([1,2,3], 3, 0, [])

// idx(0) != size(3), so continue
// First call: subset([1,2,3], 3, 1, []) (exclude arr[0]=1)
// ans.push_back(arr[0]) → ans becomes [1]
// Second call: subset([1,2,3], 3, 1, [1]) (include arr[0]=1)
// Branch 1: Exclude 1
// Step 2: subset([1,2,3], 3, 1, [])

// idx(1) != size(3), so continue
// First call: subset([1,2,3], 3, 2, []) (exclude arr[1]=2)
// ans.push_back(arr[1]) → ans becomes [2]
// Second call: subset([1,2,3], 3, 2, [2]) (include arr[1]=2)
// Step 3: subset([1,2,3], 3, 2, [])

// idx(2) != size(3), so continue
// First call: subset([1,2,3], 3, 3, []) (exclude arr[2]=3)
// ans.push_back(arr[2]) → ans becomes [3]
// Second call: subset([1,2,3], 3, 3, [3]) (include arr[2]=3)
// Step 4: subset([1,2,3], 3, 3, [])

// idx(3) == size(3) → BASE CASE
// Print empty subset: "" (nothing printed)
// Return
// Step 5: subset([1,2,3], 3, 3, [3])

// idx(3) == size(3) → BASE CASE
// Print subset: "3"
// Return
// Step 6: subset([1,2,3], 3, 2, [2])

// idx(2) != size(3), so continue
// First call: subset([1,2,3], 3, 3, [2]) (exclude arr[2]=3)
// ans.push_back(arr[2]) → ans becomes [2,3]
// Second call: subset([1,2,3], 3, 3, [2,3]) (include arr[2]=3)
// Step 7: subset([1,2,3], 3, 3, [2])

// idx(3) == size(3) → BASE CASE
// Print subset: "2"
// Return
// Step 8: subset([1,2,3], 3, 3, [2,3])

// idx(3) == size(3) → BASE CASE
// Print subset: "23"
// Return
// Branch 2: Include 1
// Step 9: subset([1,2,3], 3, 1, [1])

// idx(1) != size(3), so continue
// First call: subset([1,2,3], 3, 2, [1]) (exclude arr[1]=2)
// ans.push_back(arr[1]) → ans becomes [1,2]
// Second call: subset([1,2,3], 3, 2, [1,2]) (include arr[1]=2)
// Step 10: subset([1,2,3], 3, 2, [1])

// idx(2) != size(3), so continue
// First call: subset([1,2,3], 3, 3, [1]) (exclude arr[2]=3)
// ans.push_back(arr[2]) → ans becomes [1,3]
// Second call: subset([1,2,3], 3, 3, [1,3]) (include arr[2]=3)
// Step 11: subset([1,2,3], 3, 3, [1])

// idx(3) == size(3) → BASE CASE
// Print subset: "1"
// Return
// Step 12: subset([1,2,3], 3, 3, [1,3])

// idx(3) == size(3) → BASE CASE
// Print subset: "13"
// Return
// Step 13: subset([1,2,3], 3, 2, [1,2])

// idx(2) != size(3), so continue
// First call: subset([1,2,3], 3, 3, [1,2]) (exclude arr[2]=3)
// ans.push_back(arr[2]) → ans becomes [1,2,3]
// Second call: subset([1,2,3], 3, 3, [1,2,3]) (include arr[2]=3)
// Step 14: subset([1,2,3], 3, 3, [1,2])

// idx(3) == size(3) → BASE CASE
// Print subset: "12"
// Return
// Step 15: subset([1,2,3], 3, 3, [1,2,3])

// idx(3) == size(3) → BASE CASE
// Print subset: "123"
// Return