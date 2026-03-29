//(*)
#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 1;i<=x;i++){
        f = f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int r;
    cout<<"Enter the value of the r : ";
    cin>>r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int Permutation = nfact/nrfact;
    int Combination = nfact/(rfact*nrfact);
    cout<<"The permutation of the n,r is : "<<Permutation<<endl;
    cout<<"The combination of the n,r is : "<<Combination;
    return 0;
}