// 1111
// 1222
// 1233
// 1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i = 1;i<=(2*n-1);i++){
        for(int j = 1;j<=(2*n-1);j++){
        if(i>n) i = i - n;
        else if(j>n) j = j - n;
        cout<<min(i,j);
    }
    cout<<endl;
}
    return 0;
}