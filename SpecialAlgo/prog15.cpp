// Write a program to find the maximum sum of subarray of size k
// arr[] = {7,1,2,5,8,4,9,3,6}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[] = {7,1,2,5,8,4,9,3,6};
int size = sizeof(arr)/sizeof(arr[0]);
int k = 3;
int maxSum = 0;
int idx = 0;
for(int i=0;i<size-k;i++){
    int sum = 0;
for(int j=i;j<(i+k);j++){
    sum = sum + arr[j];   // IMP
}
if(sum>maxSum){
    maxSum = sum;
    idx = i;
}
}
cout<<"the maximum sum of the subarray of the length k is : "<<maxSum<<" & it is starting from the index : "<<idx;
return 0;
}

// T.C => O(k*n)
// S.C => O(1)