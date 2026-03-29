// sorting array containing only 0 and 1 by two pointer method
// 1 1 1  0 0 0 1 0
#include<iostream>
#include<vector>
using namespace std;
void Swap(int x, int y,vector<int>&v){
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;
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
int i = 0;
int j = a-1;
while(j>i){
    if(v[i]>v[j]) {
        Swap(i,j,v);
        i++;
        j--;
    }
    if(v[i]==1 && v[j]==1){
        j--;
    }
    if(v[i]==0 && v[j]==0){
        i++;
    }
    if(v[i]==0 && v[j]==1){
        i++;
        j--;
    }
}
cout<<"The sortted form of the given vector is : ";
for(int i = 0;i<a;i++){
    cout<<v[i]<<" ";
}
    return 0;
}

//  Note -> Their is small error with this code is 1 1 1 0 0 0 1 1 0 0.It is unable to sort this vector.