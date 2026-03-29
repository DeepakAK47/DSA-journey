// Algo of the quick sort
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&v,int si,int ei){
    int count = 0;
    int pivotEle = v[si];
    for(int i=si+1;i<=ei;i++){
        if(v[i]<=pivotEle){
            count++;
        }
    }
    int pivotIdx = count + si;
    swap(v[si],v[pivotIdx]);   // Note --> swap(pivotEle,v[pivotidx]) both are not the same things if you use this then the comparision value will change.
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
///Note --> T.C. ==>O(nlogn) in best or the avg case but in the worst case when the array is in already in the sorted form or in the reverse form it takes the O(n*n)  ==> n got number iteration used for the count and logn is for number of the levels rigth
// S.C.==> O(logn)-->avg case and O(n)--> In worst case.