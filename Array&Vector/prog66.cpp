// Confirming that the last digit in the string is an terminatinating character
#include<iostream>
using namespace std;
int main(){
    char ch[3] = {'a','b','c'};
    for(int i=0;ch[i]!='\0';i++){   // !important
        cout<<ch[i]<<" ";
    }
    return 0;
}