// moves all the zeroes to the end of the vector
// Finding the first non repeating number in the vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>v;
    int n;
    bool flag = false;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the element of the vectors : ";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"All the element of the vctor are : ";
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int sum = 0;
   for(int i = 0;i<n;i++){
    if(v[i]==0){
        sum++;
    }
}
    cout<<"The required form of the vector is : ";
    for(int i = 0;i<n;i++){
        if(v[i]!=0){
            cout<<v[i]<<" ";
        }
    }
    for(int i = 0;i<sum;i++){
        cout<<"0"<<" ";
    }
    return 0;
}