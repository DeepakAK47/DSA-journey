// Finding the value of the binary to decimal
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the entries of the vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Our given Binary number are : ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //
    int p = 1;
    int sum = 0; 
    for(int i=n-1;i>=0;i--){
        sum = sum + v[i]*p;
        p = p*2;
    }
    cout<<"The conversion of the binary to decimal is : "<<sum;
    return 0;
}