// Sort the array using the Selection sort
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[10] = {1,4,2,9,85,4,6,2,57,3};
    for(int i=0;i<10-1;i++){
        int x = INT_MAX;
        int idx = -1;  // It is one of the most important step here.
        for(int j=i;j<10;j++){
            if(arr[j]<x){
                x = arr[j];
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}