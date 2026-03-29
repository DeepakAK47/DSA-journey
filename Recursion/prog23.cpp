// Print the Good Morning using the recursion function
#include<iostream>
using namespace std;
void fun(int n){
if(n==0) return;
cout<<"Good Morning"<<endl;
fun(n-1);
}
int main(){
    int x;
    cout<<"Enter the number how many times you want to print the command : ";
    cin>>x;
    fun(x);
    return 0;
}