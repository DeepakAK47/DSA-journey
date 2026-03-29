//WAP in the qick sort which has T.C = O(nkogn) in all the best,avg,worst cases.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&v,int si,int ei){
    int count = 0;
    int pivotEle = v[(si+ei)/2];
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<=pivotEle){
            count++;
        }
    }
    int pivotIdx = count + si;
    swap(v[(si+ei)/2],v[pivotIdx]); 
    int i = si;
    int j = ei;
    while(i<(pivotIdx) && j>pivotIdx){
        if(v[i]<=pivotEle) i++;
        else if(v[j]>pivotEle) j--;
        else if(v[i]>pivotEle && v[j]<pivotEle){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void QuickSort(vector<int>&v,int si,int ei){
if(si>=ei) return;
int pi = partition(v,si,ei);
QuickSort(v,si,pi-1);
QuickSort(v,pi+1,ei);
}
int main(){
    int arr[] = {8,4,9,5,1,5,3,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    QuickSort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}