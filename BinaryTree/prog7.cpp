// WAP to find the data type of the particular variable
#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int x = 5;
    cout<<typeid(x).name()<<endl;
    return 0;
}