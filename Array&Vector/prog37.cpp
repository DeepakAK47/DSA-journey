// Sortting vector containing positive and the negative value without using extra space
//  1 2 3 - 9 -3 -2 1 2
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
        if(v[i]>v[j]){
         int temp = v[i];
         v[i] = v[j];
         v[j] = temp;
            i++;
            j--;
        } 
        if(v[i]>0 && v[j]>0){
            j--;
        }
        if(v[i]<0 && v[j]<0){
            i++;
        }
        if(v[i]<0){
            i++;
        } 
    }
    cout<<"The sortted form of the vector is : ";
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}