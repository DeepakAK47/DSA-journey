#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number : ";
    cin>>a;
    int b;
    cout<<"Enter the second number : ";
    cin>>b;
    int q = a/b;
    int r = a - b*q;
    cout<<"The reaminder of the two  number is : "<<r;
}


