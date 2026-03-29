// Initializing 2D array by taking its element from the user
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of the rows in the vector : ";
    cin>>a;
    int b;
    cout<<"Enter the number of column : ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the entries of the vecto : ";
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Our required 2D vector is "<<endl;
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 