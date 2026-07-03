// sorting 0 and 1 vector by two pointer method number 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the entries of the vector : ";
    for(int i =0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the element of the vector are : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    int j = a-1;
    while(j>i){
        if(v[i]==1 && v[j]==0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        } 
        if(v[i]==0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
    }
    cout<<"The sortted form of the vector is : ";
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}