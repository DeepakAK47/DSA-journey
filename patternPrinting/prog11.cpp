#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i++){
        cout<<i;
    }
    cout<<endl;
    int nst = n-1 ;
    int nsp = 1;
 for(int j = 1;j<=n-1;j++){
    for(int k =1;k<=nst;k++){
        cout<<k;
    }
    for(int l = 1;l<=nsp;l++){
        cout<<" ";
    }
    for(int m = (n+j);m<=(2*n-1);m++){
        cout<<m;
    }
    nst = nst - 1;
    nsp = nsp + 2;
    cout<<endl; 
 }

    return 0;
}