#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum = sum + arr[i];
    }
    cout<<"The sum of the all elements of the given array is : "<<sum;
    return 0;
}