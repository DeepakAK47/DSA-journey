#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n<0){
        int P = n*(-1);
        cout<<P<<" is the absolte value of number";
    }
    else{
        cout<<n<<" is the absolute value of the number";
    }
    return 0;
}
