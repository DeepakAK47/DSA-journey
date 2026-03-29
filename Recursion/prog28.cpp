//Print all the subarray by using the loop
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int idx = 0;
        for(int j=i;j<n;j++){
            for(int k=idx;k<=j;k++){
                cout<<arr[k];
            }
            idx++;
            cout<<endl;
        }
    }
    return 0;
}
// Note --> Lve you Deepak 