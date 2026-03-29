//Swapping two column 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
int arr[n][n];
cout<<"Enter the entries of the array : ";
for(int i = 0;i<n;i++){
    for(int j =0;j<n;j++){
        cin>>arr[i][j];
    }
}
cout<<"The 2D vector is : "<<endl;
for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}