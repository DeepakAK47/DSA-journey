// Conversion of the large string to integer
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "123456465837209245";
    long long x = stoll(str);
    cout<<x;
    return 0;
}