//  Printing the factorial product using the recursion function
#include<iostream>
using namespace std;
int fact(int n){
if(n==1 || n==0) return 1; 
return n*fact(n-1);    // Note --> Retturn is very important here
}
int main(){
    int x;
    cout<<"Enter the desire number : ";
    cin>>x;
    int y = fact(x);
    cout<<"the factorial product of the given number is : "<<y;
    return 0;
}
