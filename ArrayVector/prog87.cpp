// Input the even length string and print the second half of the string using substr function
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline (cin,str);
    cout<<"Our original string is : "<<str<<endl;
    int n = str.size();
    cout<<str.substr(n/2);
    return 0;
}