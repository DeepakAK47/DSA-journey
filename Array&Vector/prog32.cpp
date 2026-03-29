#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Reverse(int x, int y,vector<int>&v){
    while(y>x){
        int temp = v[y];
        v[y] = v[x];
        v[x] = temp;
        x++;
        y--; 
    }
    return;
}
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
    cout<<"All the entries of the vector are : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the value of the k : ";
    cin>>k;
    if(k>a) k = k-a;
    Reverse(a-k,a-1,v);
    Reverse(0,a-k-1,v);
    Reverse(0,a-1,v);
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
