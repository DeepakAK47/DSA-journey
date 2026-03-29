#include<iostream>
using namespace std;
int Sum( int a, int b){
int p  =  a+b;
  return p;
}
int main(){
    int a;
    cout<<"Enter the first number : ";
    cin>>a;
    int b;
    cout<<"Enter the second number : ";
    cin>>b;
    int* p1 = &a;
    int* p2 = &b;
    cout<<Sum(*p1,*p2);  // Here you are passing the values of a,b. You are not passing the address of both variables 
    return 0;
}
