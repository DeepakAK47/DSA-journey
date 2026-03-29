#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,65,87,54,32,54,756};
    int max = arr[0];
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<"The maximum element in the given array is : "<<max;
    return 0;
}