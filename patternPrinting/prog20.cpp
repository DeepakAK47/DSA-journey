// *******
// *** ***
// **   **
// *     *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of the rows : ";
    cin>>n;
    for(int i = 1;i<=(2*n-1);i++){
        cout<<"*";
    }
    cout<<endl;
    int nsp = 1;
    int nst = n-1;
    for(int j = 1;j<n;j++){
        for(int k = 1;k<=nst;k++){
            cout<<"*";
        }
        for(int l = 1;l<=(2*nsp-1);l++){
            cout<<" ";
        }
        for(int m = 1;m<=nst;m++){
            cout<<"*";
        }
         nsp++;
         nst--;
        cout<<endl;
    }
    return 0;
}