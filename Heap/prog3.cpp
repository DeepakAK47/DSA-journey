// print the k smallest element of the array
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10,-20,30,40,-15,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int,vector<int>,greater<int> >pq;
    // inserting all ele of array inside the min heap
    for(int i=0;i<size;i++){
        pq.push(arr[i]);
    }
    // printing k smallest element of array
    for(int i=0;i<k;i++){ 
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}