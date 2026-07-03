// 1 2 3 4 5 6 7      8 9 10
// k = 3
// 8 9 10 1 2 3 4 5 6 7  same

// 7 6 5 4 3 2 1   8 9 10
// 7 6 5 4 3 2 1 10 9 8
//8 9 10 1 2 3 4 5 6 7 same
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the entries of the vector : ";
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the entries of the vector are : ";
    for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the value of k :";
    cin>>k;
    if(k>n){
        k = k-n;
    }
    for(int i = n-k;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int i = 0;i<n-k;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}