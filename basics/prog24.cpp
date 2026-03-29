#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i = n;i<=n*10;i = i + n){
        cout<<i<<" ";
    }
    return 0;
}