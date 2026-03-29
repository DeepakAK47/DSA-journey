#include<iostream>
using namespace std;
int Permutation(int n,int r){
    int a = 1; 
    for(int i = 1;i<=n;i++){
        a = a * i;
    }
    int b = 1;
    for(int j = 1;j<=n-r;j++){
    b = b * j;
    }
    return a/b;
}

int Combination(int n,int r){
    int a = 1; 
    for(int i = 1;i<=n;i++){
        a = a * i;
    }
    int b = 1;
    for(int j = 1;j<=n-r;j++){
    b = b * j;
    }
    int c = 1;
    for(int k = 1;k<=r;k++){
        c = c * k;
    }
    return a/(b*c);
}

int main(){
    int n;
    int r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    cout<<"The permutation of n,r is :"<<Permutation(n,r)<<endl;
    cout<<"The combination of n,r is : "<<Combination(n,r);
    return 0;
}