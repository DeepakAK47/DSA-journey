// ABCDEFG
// ABC EFG
// AB   FG
// A     G

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbert of the rows : ";
    cin>>n;
    int nsp = 1;
        for(int j = 0;j<=(2*n-2);j++){
            cout<<char('A' + j);
        }
        cout<<endl;
        for(int i=1;i<=n;i++){
        for(int k=0;k<=n-i-1;k++){
            cout<<char('A' + k);
        }
            for(int l = 1;l<=nsp;l++){
                cout<<" ";
            }
            for(int m = n+i-1;m<=(2*n-2);m++){
                cout<<char('A' + m);
            }
            cout<<endl;
            nsp = nsp + 2;
    }
    return 0;
}