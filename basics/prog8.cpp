// Be carefull
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the value of character : ";
    cin>>ch;
    int P = (int)ch;
    if(P>=65 && P<=90){
        cout<<ch<<" is a upper case caracter";
    }
    else if(P>=97 && P<=122){
        cout<<ch<<" is a lower casecharacter";
    }
    else{
        cout<<ch<<" is not a character";
    }
    return 0;
}