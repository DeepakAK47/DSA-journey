//  Input a string and concatenate with its reverse string and print it.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    reverse(str.begin(),str.end());
    string s = str;
    reverse(str.begin(),str.end());
    cout<<str+s;
    return 0;
}