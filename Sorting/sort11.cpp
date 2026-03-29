// Shifting all the zeroes of the array to the end of it
// 1 2 0 0 2 0 0
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"All the entries of the array are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j]==0 && arr[j-1]!=0){
                swap(arr[j-1],arr[j]);
            }
            else if(arr[j]==0 && arr[j-1])
        }
    }
    return 0;
}

//  Note --> Doubt
