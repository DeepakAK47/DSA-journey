// Printing the elements of the matrix in the wave form
// 1 2 3
// 4 5 6
// 7 8 9
// Output --> 1 2 3 6 5 4 7 8 9
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of the rows and the cols of the matrix : ";
    cin>>a>>b;
    cout<<"Enter the entries of the matrix : ";
    int arr[a][b];   // !important --> It is givinng an error when I declare the after the declaring the size of the array.
    for(int i=0;i<a;i++){
        for(int j =0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Our required matrix is in the form of this : "<<endl;
    for(int i=0;i<a;i++){
        for(int j =0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int brr[a][b];
    for(int i =0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i%2==0){
                brr[i][j] = arr[i][j];
            }
            else{
                brr[i][j] = arr[i][b-1-j];
            }
        }
    }
    cout<<"The wave form of the given matrix is : "<<endl;
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}