// multiply the odd index elements by 2 and add 10 to all the even index element
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the entries of the vector : ";
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the element of the given vector are : ";
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // Code for even index
    for(int i = 0;i<a;i=i+2){
        v[i] = v[i]*2;
    }
    // Code for odd index element
    for(int i = 1;i<a;i=i+2){
        v[i] = v[i] +10;
    }
    cout<<"The required vector form is : ";
    for(int i =0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}