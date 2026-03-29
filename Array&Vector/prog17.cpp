#include<iostream>
#include<vector>     // We must include the vector header file for the use of the vector
using namespace std;
int main(){
    vector<int>v;    // We do not need to initialize the size of the vector.
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    return 0;
}