// Printing the value from 1 to n using the recursion
#include<iostream>
using namespace std;
void display(int i,int x){
if(i>x) return;
cout<<i<<" ";
display(i+1,x);
}
int main(){
    int x;
    cout<<"Enter the number upto which you want to display number from 1 : ";
    cin>>x;
    display(1,x); 
    return 0;
}     
