#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int p = 4;
    for(int i = 0;i<n;i++){
        cout<<p<<" ";
        p = p + 3;
    }
    return 0;
}