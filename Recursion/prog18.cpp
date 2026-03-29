// Finding the output in the pre in post calling function
// ***
#include<iostream>
using namespace std;
void pip(int val){
    if(val==0) return;
    cout<<"pre "<<val<<endl;
    pip(val - 1);
    cout<<"In "<<val<<endl;
    pip(val - 1);
    cout<<"psot "<<val<<endl;
}
int main(){
    int val;
    cout<<"Enter the value of the val : ";
    cin>>val;
    pip(val);
}