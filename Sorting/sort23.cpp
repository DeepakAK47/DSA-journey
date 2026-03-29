//  Q5. Check if the given array is almost sorted. (elements are at-most one position away)
#include<iostream>
using namespace std;
int main(){
    int sizeOfArray;
    cout<<"Enter the size of the array : ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    int x = 0;
    cout<<"Enter the element of the given array : ";
    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }
    cout<<"All the elements of the given array are : ";
    for(int i =0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<sizeOfArray;i++){
        if(arr[i]>arr[i-1]){
            continue;
        }
        else{
            x++;
        }
    }
    if(x>(sizeOfArray/2)){
         cout<<"The given array is not almost in the sorted form";
    }
    else{
        cout<<"The given array is almost in the sorted form";
    }
    return 0;
} 