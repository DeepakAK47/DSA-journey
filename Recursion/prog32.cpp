// Printing the ZigZag pattern by user input(This problem is  similar as the pre in post multipple calling function).
#include<iostream>
using namespace std;
void pip(int val){
    if(val==0) return;
    cout<<val;
    pip(val-1);
    cout<<val;
    pip(val-1);
    cout<<val;
}
int main(){
    int val;
    cout<<"Enter the value of the val : ";
    cin>>val;
    pip(val);
}