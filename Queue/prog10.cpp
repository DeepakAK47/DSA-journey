// WAP to find the first Negative number of window in the given array
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    vector<int>v;
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // printing the elements of the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // size of the window 
    int k;
    cout<<"Enter the size of the sliding window : ";
    cin>>k;
    // inserting the negative value index in the queue
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    // code for finding the first negative value of the sliding window 
    int i=0;
    while((i+k)<=size){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=(i+k))  v.push_back(0);
        else{
            v.push_back(arr[q.front()]);
        }
        i++;
    }
    // printng the elements of required vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}