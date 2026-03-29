// WAP to flip all the bits (change all zero to 1 and all 1 to zero)
#include<iostream>
#include<algorithm>
using namespace std;
void helper(int decimal,string str){
if(decimal==0){
    reverse(str.begin(),str.end());
      cout<<"Original string value is : "<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            str[i]='0';
        }
        else{
            str[i] = '1';
        }
    }
    cout<<"the flip bianry string is : "<<str;
}
else if(decimal%2==0){
    helper(decimal/2,str+'0');
}
else{
    helper(decimal/2,str+'1');
}
}
int main(){
    int decimal = 304;
    string str = "";
    helper(decimal,str);
    return 0;
}
