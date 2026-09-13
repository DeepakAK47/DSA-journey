// Find whether given string is pallindrome or not
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

// method 2 :

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