// WAP to find the number of set bit in the given binary number 
#include<iostream>
#include<algorithm>
using namespace std;
void helper(int decimal,string str){
    if(decimal==0){
        reverse(str.begin(),str.end());
            cout<<str<<endl;
            int count = 0;
            for(int i=0;i<str.size();i++){
                if(str[i]=='1'){
                    count++;
                }
            }
            cout<<"The number of set bit in the given decimal is : "<<count;
            return;
    }
    else if(decimal%2==0){
        helper(decimal/2,str+'0');
    }
    else{
        helper(decimal/2,str+'1');
    }
}
int main(){
    int decimal = 304;
    string str = "";
    helper(decimal,str);
    cout<<str;
    return 0;
}