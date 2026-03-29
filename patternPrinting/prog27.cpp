// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of the rows : ";
    cin>>a;
    int b;
    cout<<"Enter the number of the column : ";
    cin>>b;
    for(int i = 0;i<a;i++){
        for(int j = 1;j<=b-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}