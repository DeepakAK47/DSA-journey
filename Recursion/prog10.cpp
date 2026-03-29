// Find the greatest common divisor of the two number
#include<iostream>
using namespace std;
int GCD(int firstNum,int secondNum){
    if(firstNum%secondNum==0) return secondNum;
    int remain = firstNum%secondNum;
    firstNum = secondNum;
    secondNum = remain;
    GCD(firstNum,secondNum);
}
int main(){
    int firstNum;
    cout<<"enter the value of the firstNum : ";
    cin>>firstNum;
    int secondNum;
    cout<<"Enter the value of the second number : ";
    cin>>secondNum;
    int fin = GCD(firstNum,secondNum);
    cout<<"The GCD of both the number is : "<<fin;
    return 0;
}

// Note --> The time complexity is Olog(min(a,b));   