// WAP to find the minimum number of flip required in binary to convert one decimal number to another
#include<iostream>
#include<algorithm>
using namespace std;
string helper(int decimal,string str){
    if(decimal==0){
        reverse(str.begin(),str.end());
        return str;
    }
    else if(decimal%2==0){
        return helper(decimal/2,str+'0');
    }
    else{
       return helper(decimal/2,str+'1');
    }
}
string helper2(int decimal2,string str2){
    if(decimal2==0){
        reverse(str2.begin(),str2.end());
        return str2;
    }
    else if(decimal2%2==0){
        return helper2((decimal2)/2,str2+'0');
    }
    else{
       return helper2((decimal2)/2,str2+'1');
    }
}
int main(){
    int decimal=234;
    string str = "";
    string ptr;
    ptr =  helper(decimal,str);
   int decimal2 = 432;
   string str2 = "";
   string ptr2;
   ptr2 = helper2(decimal2,str2);
   cout<<"The binary form of first decimal is : "<<ptr<<endl;
   cout<<"the binary form of the second decimal is : "<<ptr2<<endl;
   int sizePtr = ptr.size();
   int sizePtr2 = ptr2.size();
   int diff = 0;
   if(sizePtr>sizePtr2){
    diff = sizePtr - sizePtr2;
    for(int i=0;i<diff;i++){
        ptr2 = '0' + ptr2;
    }
   }
   else{
    diff = sizePtr2 - sizePtr;
    for(int i=0;i<diff;i++){
        ptr = '0' + ptr; 
    }
   }
   cout<<"Equal length of ptr is : "<<ptr<<endl;
   cout<<"Equal length of ptr2 is : "<<ptr2<<endl<<endl;
   int count = 0;
   for(int i=0;i<ptr.size();i++){
    if(ptr[i]!=ptr2[i]){
        count++;
    }
   }
   cout<<"minimum number of bit flip required to convert on binary to another is : "<<count;
    return 0;
}