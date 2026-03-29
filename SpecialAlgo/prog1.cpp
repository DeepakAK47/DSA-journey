// WAP to convert the binary to decimal
#include<iostream>
using namespace std;
int helper(string str){
    int n = str.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = str[i];
        int num = ch - '0';
        result = result + num*(1<<(n-i-1)); // This is the soul of this code
    }
    return result;
}
int main(){
    string str = "0100100011";
    cout<<helper(str);
    return 0;
}