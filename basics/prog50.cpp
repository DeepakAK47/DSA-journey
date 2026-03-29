//(*)  Finding number of digin in the taken input number
#include<iostream>
using namespace std;
int NumberDigit(int x){
    int p  = 0;
    while(x>0){
        x = x/10;
        p++;
    }
    return p;
 }
 int Square(int y){
    y  = y*y;
    return y;
 }
int main(){
    int n;
    cout<<"Enter the required number : ";
    cin>>n;
    cout<<NumberDigit(n)<<endl;
    cout<<Square(n);
    return 0;
}