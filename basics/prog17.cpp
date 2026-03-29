// (*)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<n<<" is satisfing the condition";
        }
        else{
            cout<<n<<" is not satisfing the condition";
        }
    }
    else{
        cout<<n<<" is not satisfing the condtion";
    }
    return 0;
}

// Note -> It is a concept building problem.
