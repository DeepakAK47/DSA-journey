// Assigning the index to elements according to the value of the element
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {45,23,67,12,87};
    int x = 0;
    int mindx = -1;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        int minv = INT_MAX;
        for(int j=0;j<n;j++){
            if(v[j]==1){
                continue;
            }
                if(minv>arr[j]){
                    minv = arr[j];
                 mindx = j;
                }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// Note --> Here selection sort is applied
// Note --> After continue function the loop does not execute below code.