// Write a program to find the maximum sum of subarray of size k (using sliding window)
// arr[] = {7,1,2,5,8,4,9,3,6}

#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int prevSum = 0;
    for(int i=0;i<k;i++){
        prevSum = prevSum + arr[i];
    }
    int maxSum = 0;
    int maxIdx = -1;
    int i = 1;
    int j = k;
    while(j<size){
    int currSum = prevSum + arr[j] - arr[i-1];   //  The core line of the sliding window technique
    if(maxSum<currSum){
        maxSum = currSum;
        maxIdx = i;
    }
        prevSum = currSum;
        i++;
        j++;
    }
    cout<<"The maximum sum of the subarray is : "<<maxSum<<" It is present at the index of the : "<<maxIdx;
    return 0;
}