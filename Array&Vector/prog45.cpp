// Checking whether two strinf are the anagram or not
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s,t;
getline(cin,s);
getline(cin,t);
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(t==s){
    cout<<"Yes s and t both are the anagram";
}
else{
    cout<<"s and t are not anagram";
}
    return 0;
}