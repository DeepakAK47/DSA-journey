// Print all the element of the array using the recursion mehtod
#include<iostream>
using namespace std;
void display(int arr[],int size){
    if(size==0) return;
    display(arr,size-1);
    cout<<arr[size-1]<<" ";
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of  the array : ";
    for( int i=0;i<size;i++){
        cin>>arr[i];
    }
    display(arr,size);
}
