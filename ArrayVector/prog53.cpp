//  Q3. Check whether the given string is palindrome or not.
//  Input : "abcde"
//  Output : No
//  Input : "abcdcba"
//  Output : Yes
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string str1 = str;
    reverse(str1.begin(),str1.end()); 
    if(str1==str){
        cout<<str<<" : is palindrome";
    }
    else{
        cout<<str<<" is not a palindrome";
    }
    return 0;
}