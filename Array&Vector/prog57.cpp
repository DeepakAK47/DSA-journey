// Change all the elements of the entire rows and the column zero if their is any element is equal to zero in the matrix.
// Input -->
// 1 1 1
// 1 0 1
// 1 1 1

// Output -->
// 1 0 1
// 0 0 0 
// 1 0 1
#include<iostream>
#include<vector>
using namespace  std;
void change(int a, int b, &arr[][]){

}
int main(){
    int a;
    cout<<"Enter the number of the rows : ";
    cin>>a;
    int b;
    cout<<"Enter the number of the column : ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the elements of vector : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Given matrix is this : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]==0){
                change(i,j,arr[a][b])
            }
        }
    }
    return 0;
}

// Note --> Doubt -> Try it again in the future.