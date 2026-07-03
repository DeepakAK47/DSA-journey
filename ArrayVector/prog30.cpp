#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int* ptr = arr;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){    //  Note -> Remember we can print the whole array by their address 
        cout<<ptr[i]<<" ";
    }
    return 0;
}