#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the percentage of the student : ";
    cin>>n;
    if(n>90){
        cout<<"Excellent";
    }
    else if(n>80 && n<91){
        cout<<"Very good";
    }
    else if(n>70 && n<81){
        cout<<"Good";
    }
    else if(n>60 && n<71){
        cout<<"Can do better";
    }
    else if(n>50 && n<61){
        cout<<"Average";
    }
    else if(n>40 && n<51){
        cout<<"Can do better";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}