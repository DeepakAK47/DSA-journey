// Finding the valid triangle
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the length of first side : ";
    cin>>a;
    cout<<"Enter the length of second side : ";
    cin>>b;
    cout<<"Enter the length of third side : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"It is a valid triangle";
    }
    else{
        cout<<"It is not a valid triangle";
    }
    return 0;
}