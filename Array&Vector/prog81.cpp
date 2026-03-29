// transpose of the matrix
#include<iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"Enter the number of the rows of the first matrix : ";
    cin>>a;
    int b;
    cout<<"Enter the number of column of the first matrix: ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the entries of the first matrix : ";
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Our required matrix is  "<<endl;
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int brr[b][a];
    cout<<"The transpose of the given array is :"<<endl;
    for(int i =0;i<a;i++){
        for(int j = 0;j<b;j++){
            brr[j][i] = arr[i][j];
        }
    }
    for(int i = 0;i<b;i++){
        for(int j =0;j<a;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
