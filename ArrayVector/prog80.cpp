//  Transposing square matrix by using swept concept
#include<iostream>
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows of matrix : ";
    cin>>a;
    cout<<"Enter the number of the column of the matrix : ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the entries of the matrix : ";
    for(int i = 0;i<a;i++){
        for(int j =0;j<b;j++){
            cin>>arr[i][j];
        }
    } 
    cout<<"All the element of the matrix is : ";
    cout<<endl;
    for(int i = 0;i<a;i++){
        for(int j =0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0;i<a;i++){
        for(int j=0;j<b;j++){
            if(j>i){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
               else{
                continue;
            }
        }
    }
    cout<<"The transpose of the matrix is : ";
    cout<<endl;
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}