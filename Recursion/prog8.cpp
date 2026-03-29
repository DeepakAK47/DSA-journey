// Find whether given string is pallindrome or not
//***
#include<iostream>
#include<string>
using namespace std;
bool pal(string str,int i,int j){
    if(i>=j) return true;
    else if(str[i]!=str[j]) return false;
    return pal(str,i+1,j-1);  // Note --> The use of the return is very important here.
}
int main(){
    string str = "naman";
   cout<<pal(str,0,str.length()-1);
}