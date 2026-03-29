#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<n<<" is divisible by both numbers 5 and 3";
    }
    else{
        cout<<n<<" is not divisible by both 5 and 3";
    }
    return 0;
}