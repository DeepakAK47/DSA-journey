//  Sortting the given array using insertion sort algo
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}