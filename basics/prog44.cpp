//(*)
#include<iostream>
using namespace std;
#include<math.h>
int Common(int x,int y){
    int f;
    for(int i = 1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            f = i;
        }
    }
     return f;
}
int main(){
    int a;
    cout<<"Enter the first number : ";
    cin>>a;
    int b;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<Common(a,b);
    return 0;
}