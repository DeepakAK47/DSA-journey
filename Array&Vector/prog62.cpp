// Finding the number of the vowels in the given string
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<"Our given string is : "<<str;
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<count;
    return 0;
}