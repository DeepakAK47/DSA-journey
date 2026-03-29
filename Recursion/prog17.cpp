// Finding the value of the a raise to the power b by using the logirithmic function
//  ***
//  ***
#include<iostream>
using namespace std;
int pow(int base, int power){
    if(power==1) return base;
    else if(power==0) return 1;
    int ans = pow(base,power/2);
    if(power%2!=0) return ans*ans*base;  // IMP
    else return ans*ans;
}
int main(){
    int base;
    cout<<"Enter the value of the base element : ";
    cin>>base;
    int power;
    cout<<"Enter the value of the power of base element : ";
    cin>>power;
     int fin = pow(base,power);
     cout<<"The final value of the a raised to the power b is : "<<fin;
}

// Note -> Time complexity of this problem is Olog(n).