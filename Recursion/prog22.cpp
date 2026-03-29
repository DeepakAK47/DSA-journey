// Print the array after skipping 1.
#include<iostream>
using namespace std;
void skip(int arr[],int size,int idx){
    if(idx==size) return;
    else if(arr[idx]!=1){
        cout<<arr[idx]<<" ";
        idx++;
    }
    else{
        idx++;
    }
    skip(arr,size,idx);
}
int main(){
    int arr[] = {1,2,3,1,2,3,1,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    skip(arr,size,0);
}