  // 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1

#include<iostream>
using namespace std;
int Combination(int n,int r){
    int a = 1;
    for(int i = 1;i<=n;i++){
        a = a * i;
    }
    int b = 1;
    for(int j = 1;j<=n-r;j++){
        b =  b*j;
    }
    int c = 1;
    for(int k = 1;k<=r;k++){
        c = c *k;
    }
    return a/(b*c);
}
int main(){
    int n;
    cout<<"Enter the number of the rows : ";
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<Combination(i,j);
        }
        cout<<endl;
    }
    return 0;
}

// Note -> It is an awesome question.