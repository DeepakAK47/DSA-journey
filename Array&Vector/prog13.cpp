// Find the number of the triplet whose sum is equal to the value of x
// 1 2 3 4 5 6
// x = 5
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the element of the vector : ";
    for(int i = 0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the elemens of the vector are : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the desire value : ";
    cin>>x;
    int count =  0;
 for(int i = 0;i<a;i++){
    for(int j = i+1;j<a;j++){
        for(int k = j+1;j<a;j++){
            if((v[i]+v[j]+v[k])==x){
                cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
            }
        }
    }
 }
    return 0;
}