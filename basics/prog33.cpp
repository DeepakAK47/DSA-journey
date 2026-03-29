// 1 1 2 3 5 8 13 21 ....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term upto series is required : ";
    cin>>n;
    int a =  1;
    int b = 1;
    int sum = a+b;
    cout<<a<<" "<<b<<" "<<sum<<" ";
    for(int i = 3;i<=n;i++){
    a = b;
    b = sum;
    sum = a+b;
    cout<<sum<<" ";
    }
    return 0;
}