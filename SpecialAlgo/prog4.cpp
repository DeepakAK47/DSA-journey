// WAP to find the numberof sets in the binary number using built in function
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int decimal = 304;
    cout<<__builtin_popcount(decimal);
    return 0;
}