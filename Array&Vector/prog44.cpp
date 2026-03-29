// Adding two matrix
#include<iostream>
using namespace std;
int main(){
    int a1;
    cout<<"Enter the number of the rows of the first matrix : ";
    cin>>a1;
    int b1;
    cout<<"Enter the number of column of the first matrix : ";
    cin>>b1;
    int arr1[a1][b1];
    cout<<"Enter the entries of the vector : ";
    for(int i = 0;i<a1;i++){
        for(int j = 0;j<b1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Our required 2D vector is "<<endl;
    for(int i = 0;i<a1;i++){
        for(int j = 0;j<b1;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

     int a2;
    cout<<"Enter the number of the rows of the second matrix  : ";
    cin>>a2;
    int b2;
    cout<<"Enter the number of column of the second matrix : ";
    cin>>b2;
    int arr2[a2][b2];
    cout<<"Enter the entries of the vector: ";
    for(int i = 0;i<a2;i++){
        for(int j = 0;j<b2;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Our required 2D vector is "<<endl;
    for(int i = 0;i<a2;i++){
        for(int j = 0;j<b2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<"The sum of the both matrix is : "<<endl;
    // Adding two matrix
    int sum;
    for(int i =0;i<a1;i++){
        for(int j =0;j<b1;j++){
            sum = arr1[i][j] + arr2[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
} 