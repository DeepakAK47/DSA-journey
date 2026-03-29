#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;  // Note -> int* ptr = &arr;  ---> It is a wrong syntax here.
    cout<<ptr;
    return 0;
}