// 100 97 94 91 ... upto only positive number
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n : ";
cin>>n;
int a = 100;
for(int i = 1;i<=n;i++){
    if(a>=0){
        cout<<a<<" ";
        // a = a - 3;
    }
    a = a - 3;
}
    return 0;
}

