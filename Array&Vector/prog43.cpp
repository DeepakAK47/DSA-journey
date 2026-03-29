// Add all the element of the odd index in the given vector
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
     int sum = 0;
    for(int i =0;i<a;i++){
        for(int j = 0;j<b;j++){
            if((i+j)%2==0){
                sum = sum + arr[i][j];
            }
        }
    }
    cout<<"The sum of all the odd index element of the given vector : "<<sum;
    return 0;
} 