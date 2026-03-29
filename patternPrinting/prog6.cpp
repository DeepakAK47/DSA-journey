// 1234321
// 123 321
// 12   21
// 1     1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of the rows : ";
    cin>>n;
    int nsp = 1;
    for(int i  = 1;i<=(2*n-1);i++){
        cout<<i;
    }
    cout<<endl;
    for(int j = 1;j<n;j++){
        for(int k = 1;k<=n-j;k++){
            cout<<k;
        }
        for(int m = 1;m<=nsp;m++){
            cout<<" ";
        }
        for(int l = n+j;l<=(2*n-1);l++){
            cout<<l;
        }
        cout<<endl;
        nsp = nsp + 2;
    }
    cout<<endl;
    return 0;
}