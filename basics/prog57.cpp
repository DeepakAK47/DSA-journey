//(*)
#include<iostream>
#include<math.h>
using namespace std;
void Odd(int x){
    if(x%2!=0){
        cout<<x<<" ";
    }
}
int main(){
    int a;
    cout<<"Enter the first number : ";
    cin>>a;
    int b;
    cout<<"Enter the second number : ";
    cin>>b;
    int minVal = min(a,b);
    int maxVal = max(a,b);
    for(int i=minVal;i<maxVal;i++){
        Odd(i+1);
    }
    return 0;
}
