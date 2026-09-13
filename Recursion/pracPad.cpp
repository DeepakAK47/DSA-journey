// WAP to find whether the given string is pallindrome or not
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    string revStr = str;
    reverse(revStr.begin(),revStr.end());
    if(str==revStr) cout<<"It is palindrome";
    else cout<<"It is not pallindrome";
    return 0;
}
