// Finding the first occurence of target element
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,6,6,7,8};
    int target = 6;
    int lo = 0;
    int hi = 9;
    bool flag = false;
    int firstOccurence = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            flag = true;
            firstOccurence = mid;
            hi = mid-1;
        }
        else if(arr[mid]>target){
            hi = mid-1;
        }
        else lo = mid + 1;

    }
    if(flag==false){
        cout<<"Target element is not present in the array";
    }
    else{
        cout<<"The first occurence of the target element is at : "<<firstOccurence;
    }
    return 0;
}


