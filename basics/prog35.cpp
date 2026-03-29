#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number : ";
    cin>>a;
    int b;
    cout<<"Enter the second number : ";
    cin>>b;
    int P =  pow(a,b);
    cout<<"The number a raised to the power b is : "<<P;
    return 0;
}
