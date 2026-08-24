// Finding the smallest missing non negative number from the given vector
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {0,1,2,3,4,5,7,8,9,10};
    int lo = 0;
    int hi = 9;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid){
            lo = mid+1;
        }
        else{
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<"The smallest missing element of the given number is : "<<ans;
    return 0;
}

