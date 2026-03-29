#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = arr;
    for(int i  =0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<*ptr<<" ";   // *ptr always prints the actual value of the variable.
        ptr++;  // It increases the adress by four units.
    }
    return 0;
}