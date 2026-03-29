// Make a calculator using switch

#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    char ch;
    cout<<"Enter the operator : ";
    cin>>ch;
    switch(ch){
        case '+' :   cout<<a+b;  break;  
        case '-' :   cout<<a-b;  break; 
        case '*' :   cout<<a*b;  break; 
        case '/' :   cout<<a/b;  break; 
        default : cout<<"It is an invalid input";
    }
    return 0;
}



