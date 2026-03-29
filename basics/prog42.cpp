#include<iostream>
using namespace std;
void Formal(int x = 5,int y = 10){
cout<<"The formal adress of x is : "<<&x<<endl;
cout<<"The formal adress of y is : "<<&y;
}
int main(){
    int x = 5;
    int y = 10;
    cout<<"The actual Address of x is : "<<&x<<endl;
    cout<<"The actual Address of y is : "<<&y<<endl;
    Formal(5,10);
    return 0;
}