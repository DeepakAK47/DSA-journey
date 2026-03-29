// . Sort the array in descending order using Bubble Sort.

// 3 8 2 63 56 324 ---> 324 63 56 8 3 2
#include<iostream>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the size of the array : ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    cout<<"Enter the entries of the array : ";
    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }
    cout<<"All the entries of the array are : ";
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<sizeOfArray;i++){
        for(int j=i+1;j<sizeOfArray;j++){
            if(arr[j]>arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1]  = temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


