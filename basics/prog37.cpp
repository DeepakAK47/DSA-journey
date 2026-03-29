// (*)  WAP to print the reverse of number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int Remainder;
    while(n>0){
       int nn = n%10;
        cout<<nn;
        n = n/10;
    }
    return 0;
}


// Method nummber 2

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int Reverse = 0;
    int Remainder = 0;
    while(n>0){
        Reverse = Reverse*10;
        Remainder = n%10;
        Reverse = Reverse + Remainder;
        n = n/10;
    }
    cout<<"The reverse part of the given number is : "<<Reverse;
    return 0;
}