// Print the value from 1 to n using recursion by passing one parameter
#include<iostream>
using namespace std;
void display(int num){
    if(num==0) return;
    display(num-1);
    cout<<num<<" ";  // This is the very important line of the code.
}
int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    display(num);
}