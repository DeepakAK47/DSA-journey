// given the value of the n & chaeck whether it is a perfect square number or number
#include<iostream>
using namespace std;
int main(){
    int targetValue;
    cout<<"Enter the target number : ";
    cin>>targetValue;
    int lowerValue = 0;
    int upperValue = targetValue;
    bool flag = false;
    while(lowerValue<=upperValue){
        int midValue = (lowerValue + upperValue)/2;
        if((midValue*midValue)==targetValue){
            flag = true;
            cout<<targetValue<<"is the perfect square of the : "<<midValue;
            break;
        }
     else if((midValue*midValue)>targetValue){
      upperValue = midValue -1;
    }
    else {
        lowerValue = midValue + 1;
    }
}
    if(flag==false){
        cout<<targetValue<<" is not a perfect square number.";
    }
    return 0;
}