// 1
// 1 3
// 1 3 5
// 1 3 5 7




#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of the rows : ";
    cin>>a;
    int b;
    cout<<"Enter the number of the column : ";
    cin>>b;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=(i*2)-1;j = j+2 ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}