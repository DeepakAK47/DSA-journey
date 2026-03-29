// 3,12,48,.. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int a = 3;
    int r = 4;
    cout<<a<<" ";
    for(int i = 1;i<n;i++){
        a = a * r;
        cout<<a<<" ";
    }
    return 0;
}