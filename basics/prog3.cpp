#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the alphabet : ";
    cin>>ch;
    int y = (int)ch;
    int Position = y-64;
    cout<<"The position of the given alphabet is : "<<Position;
    return 0;
}