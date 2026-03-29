// (*)
#include<iostream>
using namespace std;
 void Fun(int a, int* lastDigit,int* firstDigit){
      *lastDigit = a%10;
      while(a>0){
        *firstDigit = a/10;
      }
      return;
}
int main(){
    int a;
    cout<<"Enter the required number : ";
    cin>>a;
    int lastDigit;
    int firstDigit;
    int* ptr1 = &lastDigit;
    int* ptr2 = &firstDigit;
    Fun(a,ptr1,ptr2);
    cout<<"The last digit of the number is : "<<lastDigit<<endl;
    cout<<"The first digit of the number is : "<<firstDigit;
    return 0;
}

// Doubt