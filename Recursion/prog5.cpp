// Generate all the binary string of the length n
// ***
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void bin(string str,int size){
    if(str.size()==size){
        cout<<str<<endl;
        return;
    }
    else if(str.size()==0){
        bin(str+'0',size);
        bin(str+'1',size);
    }
    else if(str[str.size()-1]=='1'){
        bin(str+'0',size);
    }
    else if(str[str.size()-1]=='0'){
        bin(str+'0',size);
        bin(str+'1',size);
    }
}
int main(){
    int size = 3;
    bin("",size);
    return 0;
}
// Note --> some cases are sort in this.