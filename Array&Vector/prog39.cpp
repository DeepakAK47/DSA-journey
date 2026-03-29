// Sort teh vector containing  only Zero and one
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the entries of the vector : ";
    for(int i = 0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the element of the given vector are : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int Zero = 0;
    int One = 0;
    for(int i =0;i<a;i++){
        if(v[i]==0) Zero++;
        else One++;
    }
    for(int i = 0;i<Zero;i++){
        cout<<"0"<<" ";
    }
    for(int j=0;j<One;j++){
        cout<<"1"<<" ";
    }
}