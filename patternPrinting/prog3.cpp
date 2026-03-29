//    A
//   ABC
//  ABCDE
// ABCDEFG

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int nsp = n-1;
    int nstr = 1;
    for(int i =  1;i<=n;i++){
        for(int j = 1;j<=nsp;j++){
            cout<<" ";
        }
        for(int k = 65;k<2*nstr-1+65;k++){
            cout<<char(k);
        }
        cout<<endl;
        nsp  = nsp -1;
        nstr = nstr + 1;
    }
    return 0;
}