// WAP to find which element of array which occurs only once(Using bit properties)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,4,1,3,2,3,5,1,2};
    int res = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
     res = res^arr[i];
    }
    cout<<"The unique element of the array is : "<<res;
    return 0;
}
// Note ==> The XOR of any number with 0 is always that number 
// dry run | i | arr[i] | res(before) | res = res ^ arr[i] | res(after) |
| - | ------ | ----------- | ------------------ | ---------- |
| 0 | 4      | 0           | 0 ^ 4              | 4          |
| 1 | 4      | 4           | 4 ^ 4              | 0          |
| 2 | 1      | 0           | 0 ^ 1              | 1          |
| 3 | 3      | 1           | 1 ^ 3              | 2          |
| 4 | 2      | 2           | 2 ^ 2              | 0          |
| 5 | 3      | 0           | 0 ^ 3              | 3          |
| 6 | 5      | 3           | 3 ^ 5              | 6          |
| 7 | 1      | 6           | 6 ^ 1              | 7          |
| 8 | 2      | 7           | 7 ^ 2              | 5          |
