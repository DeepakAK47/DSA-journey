#include<iostream>
using namespace std;
int Square(int x){
   int p = x*x;
    return p;
}
int main(){
int n;
cout<<"Enter the number : ";
cin>>n;
for(int i = 1;i<=n;i++){
    cout<<Square(i)<<" ";
}
    return 0;
}