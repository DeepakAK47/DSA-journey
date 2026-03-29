// WAP to print the decreasing order of the array using merge sort
#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    int aSize = a.size();
    int bSize = b.size();
        while(i<a.size() && j<b.size()){
        if(b[j]>=a[i]){
            v[k] = b[j];
            k++;
            j++;
        }
        else {
            v[k] = a[i];
            k++;
            i++;
        }                                
    }
    if(i==a.size()){
        while(k<v.size()){
            v[k] = b[bSize-1];
            k++;
            bSize--;
        }
    }
    else {
        while(k<v.size()){
            v[k] = a[aSize-1];
            k++;
            aSize--;
        }
    }
}
void merge(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n1;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int j=0;j<n2;j++){
        b[j] = v[j+n1];
    }
    // Magic
    merge(a);
    merge(b);
    // mergeSort
    mergeSort(a,b,v);
}
int main(){
    int arr[] = {6,5,9,2,10,23,1,8,9,1};
    int n =  sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    merge(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

// Note --> Keep it up