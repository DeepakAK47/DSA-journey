// WAP which prints all binary string of length n
#include<iostream>
using namespace std;
void helper(string str,int size){
    if(size==0){
        cout<<str<<" ";
        return;
    }
        helper(str + '0',size-1);
        helper(str + '1',size-1);
}
int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    helper("",size);
    return 0;
}
// Note -->  Keep Revision