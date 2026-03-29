// Check the given character is vowel or not
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the value of character : ";
    cin>>ch;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<ch<<" is an vowel of uppercase alphabet";
    }
    else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<ch<<" is an vowel of lower case alphabet";
    }
else{
    cout<<ch<<" is a contant alphabet";
}
    return 0;
}