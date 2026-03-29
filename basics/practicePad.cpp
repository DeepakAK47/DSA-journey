// WAP to swap two number using pointer
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int* temp = a;
    a = b;
    b = temp;
}
int main(){
    int firstNum,secNum;
    cout<<"Enter the first number : ";
    cin>>firstNum;
    cout<<"Enter the second number : ";
    cin>>secNum;
    int* ptr1 = &firstNum;
    int* ptr2 = &secNum;
    swap(ptr1,ptr2);
    cout<<"The new value a is : "<<firstNum<<endl;
    cout<<"The new value of b is : "<<secNum;
    return 0;
}