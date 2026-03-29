// WAP for algo of cyclic sort
#include<iostream>
using namespace std;
int main(){
    int arr[] = {6,3,4,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i<size){
        int p = arr[i];
        if(arr[i]!=i+1){
            swap(arr[i],arr[p-1]);
        }
        else if(arr[i]==i+1){ 
            i++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}