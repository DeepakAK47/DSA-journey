// Return the maximum value of the array using recursion
#include<iostream>
#include<climits>
using namespace std;
int display(int arr[],int size,int idx){
     if(idx==size) return INT_MIN;   // VVIMP
    return max(arr[idx],display(arr,size,idx+1));
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = display(arr,size,0);
    cout<<"The maximum value of the given array is : "<<max;
}