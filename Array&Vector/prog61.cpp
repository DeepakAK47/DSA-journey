// Check whether two string are isomorphic or not
// eg naman == naman
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"Both the string sre the isomorphic";
    }
    else{
        cout<<"Both the string are not isomorphic.";
    }
    return 0;
}