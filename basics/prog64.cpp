// (*)
#include<iostream>
using namespace std;
int Swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a;
    cout<<"Enter the first number : ";
    cin>>a;
    int b;
    cout<<"Enter the second number : ";
    cin>>b;
    Swap(a,b);
        cout<<"The new value of a is : "<<a<<endl;
    cout<<"The new value of b is : "<<b; 
    return 0;
}