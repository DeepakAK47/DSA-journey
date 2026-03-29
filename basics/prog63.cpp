// (*)
#include<iostream>
using namespace std;
int  Swap(int a, int b){
    int tempt = a;
    a = b;
    b =  tempt;
    return a,b;
}
int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b;
    cout<<"Enter the  value of b : ";
    cin>>b;
    Swap(a,b);
    cout<<"The new value of a is : "<<a<<endl;
    cout<<"The new value of b is : "<<b; 
    return 0;
}