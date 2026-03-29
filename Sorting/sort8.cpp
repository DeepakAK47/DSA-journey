// WAP to find the kth smallest element in an array using the quick sort
// Find the time and space complexity
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int helper2(vector<int>&v,int si,int ei){
    int count = 0;
    int pivotEle = v[(si+ei)/2];
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<=pivotEle){
            count++;
        }
    }
    int pivotIdx = count + si;
    swap(v[(si+ei)/2],v[pivotIdx]);   // Confusing line
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
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
void helper(vector<int>&v,int si,int ei){
    if(si>=ei) return;
    int pi = helper2(v,si,ei);
    helper(v,si,pi-1);
    helper(v,pi+1,ei);
}
int main(){
    int arr[] = {1,4,7,2,9,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+size);
    int k = 3;
    helper(v,0,size-1);
    cout<<"the sortted form of the array is : ";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int p = 0;
    for(int i=0;i<size;i++){
        if(p==k-1){
            cout<<"The kth smallest element  is : "<<v[i];
            break;
        }
       else if(v[i]!=v[i+1]){
            p++;
        }
        else if(v[i]==v[i+1]){
            continue;
        }
    }
    return 0;
}

// T.C. ==> O(nlogn);
// S.C ==> O(n);