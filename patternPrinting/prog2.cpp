//    1
//   123
//  12345
// 1234567
// (***)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int nst = 1;
    int nsp = n-1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=nsp;j++){
            cout<<" ";
        }
        for(int k = 1;k<=(2*nst-1);k++){
            cout<<k;
        }
        nst = nst + 1;
        nsp--;
        cout<<endl;
    }
    return 0;
}