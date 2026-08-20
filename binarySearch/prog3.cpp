// Finding the a row in the 2D array which contains the maximum number of the 1 
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of the rows of the array : ";
    cin>>rows;
    int col;
    cout<<"Enter the number of the column of the array : ";
    cin>>col;
    int arr[rows][col];
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int noone;
    int idx;
    int max = 0;  // Note --> You can not compare the value untill you initialize this before.
    for(int i=0;i<rows;i++){
        noone = 0;
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                noone++;
            }
        }
        if(max<noone){
            max = noone;
            idx = i;
        }
    }

    cout<<"The row which contains the maximum number of the one is : "<<idx;
    return 0;
}

