//WAP to find the length of the longest subarray which has maximum possible bitwise AND value
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int helper(int arr[],int size){
    int maxVal = INT_MIN;
    int ans =0;
    int i=0;
    int j=0;
    while(j<size){
        if(arr[j]>maxVal){
            maxVal = arr[j];
            j++;
        }
        else if(arr[j]<maxVal){
            if((j-i)>ans){
                ans = j-i;
            }
            j++;
            i = j;
        }
        else if(arr[j]==maxVal) {
                j++;
        }
    }
    return ans;
}
int main(){
    int arr[] = {12,3,1,6,1,6,6,6,6,4,3,8,13,13,13,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int targetAns;
    targetAns = helper(arr,size);
    cout<<"the required answer is : "<<targetAns;
    return 0;
}