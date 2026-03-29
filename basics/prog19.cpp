#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of first number : ";
    cin>>a;
    cout<<"Enter the value of second number : ";
    cin>>b;
    cout<<"Enter the value of third number : ";
    cin>>c;
    int largestNumber = a;
    if(b>a){
        if(b>c){
            cout<<b<<" is the largest number";
        }
    }
    if(c>a){
        if(c>b){
            cout<<c<<" is the largest number";
        }
    }
    else{
        cout<<a<<" is the largest number";
    }
    return 0;
}