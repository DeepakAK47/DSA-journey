// Program for merge sort

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            v[k] = a[i];
            i++;
            k++;
        }
        else{
            v[k] = b[j];
            j++;
            k++;
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            v[k] = b[j];
            j++;
            k++;
        }
    }
    else{
        while(i<a.size()){
            v[k] = a[i];
            k++;
            i++;
        }
    }
}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n1;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }
    // Magic
    mergeSort(a);
    mergeSort(b);
    // Merging two divided vector
    merge(a,b,v);
}
int main(){
    int arr[] = {1,5,2,7,3,8,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}


// T.C ==> O(nlogn) 

// Dry run :

// Dry run (concise) for v = {1,5,2,7,3,8,4,9}

// Initial call: mergeSort(v)

// v = [1,5,2,7,3,8,4,9], n=8
// split: a = [1,5,2,7], b = [3,8,4,9]
// Sort a = [1,5,2,7]

// split: a1 = [1,5], a2 = [2,7]
// sort a1:
// split to [1], [5] → merge([1],[5], a1) → a1 = [1,5]
// sort a2:
// split to [2], [7] → merge([2],[7], a2) → a2 = [2,7]
// merge(a1,a2,a):
// compare 1<2 → a[0]=1
// compare 5>=2 → a[1]=2
// compare 5<7 → a[2]=5
// remaining 7 → a[3]=7
// result: a = [1,2,5,7]
// Sort b = [3,8,4,9]

// split: b1 = [3,8], b2 = [4,9]
// sort b1:
// split [3], [8] → merge → b1 = [3,8]
// sort b2:
// split [4], [9] → merge → b2 = [4,9]
// merge(b1,b2,b):
// compare 3<4 → b[0]=3
// compare 8>=4 → b[1]=4
// compare 8<9 → b[2]=8
// remaining 9 → b[3]=9
// result: b = [3,4,8,9]
// Final merge(a,b,v) where a=[1,2,5,7], b=[3,4,8,9], v has size 8

// steps:
// a[0]=1 < b[0]=3 → v[0]=1
// a[1]=2 < b[0]=3 → v[1]=2
// a[2]=5 >= b[0]=3 → v[2]=3
// a[2]=5 >= b[1]=4 → v[3]=4
// a[2]=5 < b[2]=8 → v[4]=5
// a[3]=7 < b[2]=8 → v[5]=7
// remaining b → v[6]=8, v[7]=9
// final v = [1,2,3,4,5,7,8,9]
// Output printed: 1 2 3 4 5 7 8 9
