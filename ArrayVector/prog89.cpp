//  Printing  the wave form of the elements from the bottom of the matrix
// 1 2 3
// 4 5 6
// 7 8 9 
// Output --> 7 8 9 6 5 4 1 2 3
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of the rows and column of the matrix :";
    cin>>a>>b;
    cout<<"Enter the entries of the matrix : ";
    int arr[a][b];
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Our required matrix is : "<<endl;
    for(int i =0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"The spiral form of the matrix is : "<<endl;
    for(int i=a-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<b;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j = b-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

// Note -> Continue tommorroww.