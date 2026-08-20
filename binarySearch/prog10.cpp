//  Finding the upper bound of the given target 
// Finding the lower bound of the given target element
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,34,46,78,89,344,567,999,2134,5634};
    int lo = 0;
    int  hi = 9;
    int target = 43;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            cout<<arr[mid+1]<<" is the lower bound of the given element.";
            flag = true;
        }
        else if(arr[mid]>target){
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    if(flag==false){
        cout<<arr[hi+1]<<" : it is the lower bounded element of the given array.";
    }
    return 0;
}