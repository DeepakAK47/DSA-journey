// Print Hello pw three times using the recursion
#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"Pw"<<endl;
    fun(n-1);
}
int main(){
    fun(3);
}     