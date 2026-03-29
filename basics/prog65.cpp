// (***)
#include<iostream>
using namespace std;
void Swap(int* a,int* b){
    int tempt = *a;
    *a = *b;
    *b = tempt;
    return;
}
int main(){
int a;
cout<<"Enter the first number : ";
cin>>a;
int b;
cout<<"Enter the second number : ";
cin>>b;
Swap(&a,&b);
cout<<"The new value of the first number is : "<<a<<endl;
cout<<"The new value of second number is : "<<b;
    return 0;
}               