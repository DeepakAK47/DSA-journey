#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n%5==0 && n%15!=0){
        cout<<n<<" is only divisible by 5";
    }
    else if(n%3==0 && n%15!=0){
        cout<<n<<" is only divisible by 3 ";
    }
    else if(n%3==0 && n%5==0){
        cout<<n<<" is divisible by 5,3 and 15";
    }
    return 0;
}