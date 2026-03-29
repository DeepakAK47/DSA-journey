// Note -> This question takes 1.42Hours.
// Rvise it again and again.

//    A
//   BAB
//  CBABC
// DCBABCD

// (*****)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k = i-1;k>=0;k--){  // Important
            cout<<char('A' + k);
        }
        for(int l = 1;l<i;l++){    // Important
            cout<<char('A'+l);
        }
        cout<<endl;
    }
    return 0;
}