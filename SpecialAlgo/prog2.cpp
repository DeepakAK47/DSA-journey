// WAP to print the decimal number to bianry
#include<iostream>
#include<algorithm>
using namespace std;
void helper(int decimal,string str){
    if(decimal==0){
        reverse(str.begin(),str.end());
        cout<<str;
        return;
    }
    else if(decimal%2==0){
        helper(decimal/2,str+'0');
    }
    else{
        helper(decimal/2,str+'1');
    }
}
int main(){
    int decimal = 18;
    string str = "";
    helper(decimal,str);
    return 0;
}
