// Printing the sum fom 1 to N
#include<iostream>
using namespace std;
int sum(int num){
    if(num==0) return 0;
    return num + sum(num-1);  
}
int main(){
    int num;
    cout<<"Enter the value of n : ";
    cin>>num;
    cout<<sum(num);
}