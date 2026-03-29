// WAP to find whether the number is prime or not in root(n) time complexity
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x = 78;
    bool flag = false;
    int squarRoot = sqrt(x);
    for(int i=2;i<=squarRoot;i++){
        if(x%i==0){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<x<<" : it is not a prime number";
    else {
        cout<<"It is a prime number";
    }
    return 0;
}