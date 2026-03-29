// Good problem
#include<iostream>
using namespace std;
void Array(int arr[],int n){
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

// Note => Always define another function outside the previous function.
void Change(int brr[]){
    brr[0] = 100;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the entries of the array : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    Array(arr,n);
    Change(arr);
    Array(arr,n);
    return 0;
}

// I shall continue from last 2 Hours lecture.
