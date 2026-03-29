//  4,7,10,13,16.. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int a = 4;
    int d = 3;
    cout<<a<<" ";
    for(int i = 1;i<n;i++){
        a =  a + d;
        cout<<a<<" ";
    }
    return 0;
}