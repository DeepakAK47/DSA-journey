// WAP to merge two sortted array
#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>&merge,int arr[], int brr[], int arrSize, int brrSize){
    int i=0;
    int j=0;
    while(i<arrSize && j<brrSize){
        if(arr[i]<brr[j]){
            merge.push_back(arr[i]);
            i++;
        }
        else{
            merge.push_back(brr[j]);
            j++;
        }
    }
    // Copy remaining elements from arr
    while(i<arrSize){
        merge.push_back(arr[i]);
        i++;
    }
    // Copy remaining elements from brr
    while(j<brrSize){
        merge.push_back(brr[j]);
        j++;
    }
}
int main(){
    int arr[] = {1,3,5,7,9,10,12,14};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {2,4,6,8,11};
    int brrSize = sizeof(brr)/sizeof(brr[0]);
    vector<int>merge;
    Merge(merge,arr,brr,arrSize,brrSize);
    for(int i=0;i<merge.size();i++){
        cout<<merge[i]<<" ";
    }
    return 0;
}


// T.C ==> O(nlogn)