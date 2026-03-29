//  Sort thr given vector conntaining only zero and one by two pointer method
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

void Reverse(int x,int y,vector<int>&v){
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}

int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the size of the vector : ";
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the entries of the vector are : ";
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    int j = a-1;
    while(j>i){
        if(v[i]>=v[j]){
             Reverse(i,j,v);
            i++;
            j--;
        }
    }
    if(v[i]==0) i++;
    if(v[j]==1)  j--;
    cout<<"The sortted form of the given vector is : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}


//  Continue after 3Hours and 11 minutes
