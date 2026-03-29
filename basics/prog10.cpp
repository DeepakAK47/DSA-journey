#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"Number is divisible";
    }
    else{
        cout<<"number is not divisibe";
    }
    return 0;
}