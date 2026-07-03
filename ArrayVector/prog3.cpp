#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,6,7,8};
    int x;
    bool flag = false;
    cout<<"Enter the disired number : ";
    cin>>x;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==x){
            cout<<"The disired element is present at the index of : "<<i;
            flag = true;
            break;
        }
    }
 if(flag==false) cout<<"The disired element is not present in the given array";
    return 0;
}