// WAP to find the sum of all digits of given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    int Remainder;
    while(n>0){
        Remainder = n%10;
        sum = sum + Remainder;
        n = n/10;
    }
    cout<<"The sum of the digit of the given number is : "<<sum;
    return 0;
}