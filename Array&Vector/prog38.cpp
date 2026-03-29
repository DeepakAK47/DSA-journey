#include<iostream>
#include<vector>
#include<algorithm>   // It is compulsory to for the using of sort function
using namespace std;
vector<int>v;
int main(){
    cout<<"Enter the entries of the vector : ";
    for(int i = 0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     for(int i = 0;i<5;i++){
        cout<<v[i]<<" ";
        }
        cout<<endl;
        sort(v.begin(),v.end());     //  This is a function which sort all the entries on the sortted format.
        for(int i = 0;i<5;i++){
            cout<<v[i]<<" ";
        }
    return 0;
}