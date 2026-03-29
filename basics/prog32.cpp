#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which factorial product is required : ";
    cin>>n;
    int product = 1;
    for(int i = 1;i<=n;i++){
        product = product*i;
    }
    cout<<"The fatorial of the given number is : "<<product;
    return 0;
}