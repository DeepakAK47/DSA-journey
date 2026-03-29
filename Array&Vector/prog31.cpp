#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the entries of the vector : ";
    for(int i = 0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    cout<<"All the entries of the vector are : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    int a1 = 0;
    int b = a-1;
    while(b>a1){
        int temp = v[a1];
        v[a1] = v[b];
        v[b] = temp;
        a1++;
        b--;
    }

    cout<<endl;
    cout<<"The format of the given vector is : ";
    for(int i = 0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}