// Conversion of the string to integers
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "1234567";
    int x =    stoi(str);
    cout<<x<<endl;
    cout<<++x<<endl;
    cout<<x++;
    return 0;
}