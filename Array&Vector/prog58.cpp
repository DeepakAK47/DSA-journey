// Basics of the 2D vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    vector<int>v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    vector<int>v3;
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    int rows = v.size();
    int cols = v[0].size();
    cout<<rows<<" "<<cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // for(int i =0;i<rows;i++){
    //     for(int j =0;j<cols;j++){
    //         cout<<v[rows][cols]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}

// Note --> Contiue from tomorrow.