// Updating all the even place of the string to a character
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
            str[i] = 'a';
        }
        else continue;
    }
    cout<<"Our updated form of the string is : "<<str;
    return 0;
}