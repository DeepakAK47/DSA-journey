// Printing the value of a raise to power b using the recursion function
#include<iostream>
using namespace std;
int pow(int firstnum,int secnum){
    if(firstnum==1 || secnum==0) return 1;
    return firstnum*pow(firstnum,secnum-1);
}
int main(){
    int firstnum,secnum;
    cout<<"Enter the value of the first number : ";
    cin>>firstnum;
    cout<<"Enter the value of the second number : ";
    cin>>secnum;
   cout<<pow(firstnum,secnum);
}