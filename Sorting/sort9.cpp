// Find the kth smallest element of the array in O(n) time complexity(array contains duplicate elements)
// Hint : Use quick slection
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int helper2(vector<int>&v,int si,int ei){
    int pivotEle = v[(si+ei)/2];
    int count  = 0;
    for(int i=si;i<=ei;i++){
        if(v[i]==(si+ei)/2) continue;
        if(v[i]<=pivotEle){
            count++;
        }
    }
    int pivotIdx = count + si;
    int i = 
}
int helper1(vector<int>&v,int si,int ei,int k){
    int pi = helper2(v,si,ei);

}
int main(){
    int arr[] = {1,2,1,3,62,7,5,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+size);
    int k = 3;
    helper1(v,0,size-1,k);
    return 0;
}
