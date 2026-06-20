// find the index of the students whose marks is less than 35
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks obtained by the student : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
    return 0;
}
