// ABCDEF
// ABCDEF
// ABCDEF
// ABCDEF
// (*)
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of the rows : ";
    cin>>a;
    int b;
    char ch;
    cout<<"Enter the number of column : ";
    cin>>b;
    for(int i = 65;i<65+a;i++){
        for(int j =65;j<65+b;j++){
            char ch = char(j);
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}