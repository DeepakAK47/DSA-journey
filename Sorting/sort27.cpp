// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of 
// two numbers formed from digits of the array. Please note that all digits of the given array must be 
// used to form the two numbers.


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the size of the given array : ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    cout<<"Enter the elements of the given array : ";
    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }
    cout<<"All the elements of the given array are : ";
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int maxv = INT_MAX;
    int minv = INT_MIN;
    for(int i=0;i<sizeOfArray;i++){
        if(maxv>arr[i]){
            maxv = arr[i];
        }
    }
      for(int i=0;i<sizeOfArray;i++){
        if(arr[i]>minv){
            minv = arr[i];
        }
    }
    cout<<"The smallest sum of the two number in the given matrix is : "<<(minv +  maxv);
    return 0;
}