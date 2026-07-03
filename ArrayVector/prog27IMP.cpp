// Very Good Problem..
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;
    for(int i  = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr = 9; // It is pointing to the first element of the array
    ptr++;   //   It moves the pointer to the second element of the array
    *ptr = 14;  // It changes the second element of the array to 14
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){   //  The pointer is pointing the second element of the array this is the reason why it is giving the some randon value at the end of the array.
        cout<<ptr[i]<<" ";
    }
    return 0;
}