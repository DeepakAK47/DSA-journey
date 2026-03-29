#include<iostream>
using namespace std;
int main(){
    int a =  9;
    int* p = &a;
    cout<<&a<<endl;  // This will print the address of a
    cout<<p<<endl; // This will print the address of a
    return 0;
}