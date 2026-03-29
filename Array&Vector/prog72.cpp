// Input a string of even length and reverse the  half part of the string.
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
string str;
getline(cin,str);
cout<<str<<endl;
int n = str.size();
int p = n/2;
reverse(str.begin(),str.begin()+p);
cout<<str;
    return 0;
}