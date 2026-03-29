#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int a;
    cout<<"Enter the size of the vector : ";
    cin>>a;
    cout<<"Enter the elements of the vector : ";
    for(int i = 0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int b;
    cout<<"Enter the desire sum of the number : ";
    cin>>b;
    for(int i = 0;i<a;i++){
        for(int j = i+1;j<a;j++){
            if((v[i]+v[j])==b){
                cout<<"("<<i<<","<<j<<")"<<" ";
            }
        }
    }

    return 0;
}
