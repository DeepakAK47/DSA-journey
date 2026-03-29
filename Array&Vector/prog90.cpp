// 1 2 3
// 4 5 6
// 7 8 9 
// output ->  1 4 7 8 5 2 3 6 9

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of the rows and cols : ";
    cin>>a>>b;
    int arr[a][b];
    for(int i =0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The given matrix is in the form of this : "<<endl;
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The required form of the matrix is : "<<endl;
    for(int i = 0;i<a;i++){
        if(i%2==0){
            for(int j =0;j<b;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j = b-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}