#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int a = 3;
    int r = 4;
    for(int i = 0;i<n;i++){
        cout<<a<<" ";
        a = a * 4;
    }
    return 0;
}