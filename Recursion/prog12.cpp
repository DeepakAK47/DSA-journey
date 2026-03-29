// Find the all combination sum
#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int>v,int arr[],int size,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
        else if(target<0){ 
            return;
        }
        for(int i=idx;i<size;i++){
            v.push_back(arr[i]);
            helper(v,arr,size,target-arr[i],i+1);
            v.pop_back();
        }
    }
int main(){
    int arr[] = {1,1,2,5,7,10};
    vector<int>v;
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int sum = 0;
    helper(v,arr,size,target,0);
    return 0;
}

//  Code Summary

// helper(v, arr, size, target, idx) recursively explores all combinations.

// If target == 0, we print the combination.

// If target < 0, we backtrack (stop exploring).

// Loop from idx to size, so we can reuse the same element (i remains same in recursive call).

// Initial Call
// helper(v = {}, arr = {2,3,5}, size = 3, target = 8, idx = 0)

// STEP 1: i = 0 → pick 2
// v = {2}
// target = 8 - 2 = 6
// helper({2}, arr, 3, 6, 0)

// STEP 2: i = 0 again → pick 2
// v = {2, 2}
// target = 6 - 2 = 4
// helper({2,2}, arr, 3, 4, 0)

// STEP 3: i = 0 again → pick 2
// v = {2,2,2}
// target = 4 - 2 = 2
// helper({2,2,2}, arr, 3, 2, 0)

// STEP 4: i = 0 again → pick 2
// v = {2,2,2,2}
// target = 2 - 2 = 0
// ✅ target == 0 → print {2,2,2,2}

 
// Output:

// 2 2 2 2


// Backtrack → remove last 2
// v = {2,2,2}

// STEP 5: i = 1 → pick 3
// v = {2,2,2,3}
// target = 2 - 3 = -1 → stop


// Backtrack → v = {2,2,2}

// STEP 6: i = 2 → pick 5
// v = {2,2,2,5}
// target = 2 - 5 = -3 → stop


// Backtrack → v = {2,2}

// STEP 7: i = 1 → pick 3
// v = {2,2,3}
// target = 4 - 3 = 1
// helper({2,2,3}, arr, 3, 1, 1)

// i = 1 again → pick 3 → target = -2 → stop
// i = 2 → pick 5 → target = -4 → stop

// Backtrack → v = {2,2}

// STEP 8: i = 2 → pick 5
// v = {2,2,5}
// target = 4 - 5 = -1 → stop


// Backtrack → v = {2}

// STEP 9: i = 1 → pick 3
// v = {2,3}
// target = 6 - 3 = 3
// helper({2,3}, arr, 3, 3, 1)

// i = 1 again → pick 3
// v = {2,3,3}
// target = 3 - 3 = 0 ✅ print


// Output:

// 2 3 3


// Backtrack → v = {2,3}

// i = 2 → pick 5 → target = -2 → stop

// Backtrack → v = {2}

// STEP 10: i = 2 → pick 5
// v = {2,5}
// target = 6 - 5 = 1 → no further valid combination


// Backtrack → v = {}

// STEP 11: i = 1 → pick 3
// v = {3}
// target = 8 - 3 = 5
// helper({3}, arr, 3, 5, 1)

// i = 1 again → pick 3
// v = {3,3}
// target = 5 - 3 = 2
// helper({3,3}, arr, 3, 2, 1)


// → i = 1 again → target = -1 → stop
// → i = 2 → target = -3 → stop
// Backtrack → v = {3}

// i = 2 → pick 5
// v = {3,5}
// target = 5 - 5 = 0 ✅ print


// Output:

// 3 5


// Backtrack → v = {}

// STEP 12: i = 2 → pick 5
// v = {5}
// target = 8 - 5 = 3
// helper({5}, arr, 3, 3, 2)

// i = 2 again → pick 5 → target = -2 → stop

// Backtrack → v = {}

// ✅ FINAL OUTPUT

// 2 2 2 2
// 2 3 3
// 3 5

// Summary Table
// Combination	Sum
// 2 2 2 2	8
// 2 3 3	8
// 3 5	8