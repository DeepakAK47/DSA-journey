// Finding the duplicate element of the given array of it contains element form [1,n]
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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int lowerIndex = 0;
    int upperIndex = n-1;
    while(lowerIndex<=upperIndex){
        int midValue = (lowerIndex + upperIndex)/2;
        if(arr[midValue]==midValue){
            lowerIndex = midValue + 1;
        }
        else{
            cout<<arr[midValue]<<" : this is the duplicated element in the given array.";
            break;
        }
    }
    return 0;
}