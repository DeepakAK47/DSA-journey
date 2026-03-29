// Find the maximum value of the array using the recursion
#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
void display(int arr[],int size,int idx,int max){
    if(idx==size){
        cout<<max;
        return;
    }
    if(arr[idx]>max) max = arr[idx];
    display(arr,size,idx+1,max);  //
}
int main(){
    int arr[]= {1,2,3,4,5,6,7};
     int size = sizeof(arr)/sizeof(arr[0]);
     int max = INT_MIN;
    display(arr,size,0,max);
}  