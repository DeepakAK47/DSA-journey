// Be carefull
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the intergeral value : ";
    cin>>x;
    float y = (float)x;
    float HalfValue  = y/2;
    cout<<"Half value of the given integral is : "<<HalfValue;
    return 0;
}

// Note -> The conversion of one datatype to another is called type casting.