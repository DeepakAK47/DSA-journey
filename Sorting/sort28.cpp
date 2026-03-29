// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort 
// and display the sorted array.

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of the elements are present in the array : ";
    cin>>n;
    string arr[n];
    cout<<"Enter the elements of the string array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the original array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    cout<<"The sortted form of the matrix is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}