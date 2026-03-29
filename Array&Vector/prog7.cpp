//Count number of element strictly greater than x
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the elements of the vectors : ";
    for(int i = 0;i<a;i++){
        int b;
        cin>>b;
        v.push_back(b);
    }
    cout<<"All the entries of the vector are : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int c;
    cout<<"Enter the value of required number : ";
    cin>>c;
    int count = 0;
    for(int i = 0;i<a;i++){
        if(v[i]>c) count++;
    }
    cout<<"The number of element strictly greater than x is : "<<count;
    return 0;
}