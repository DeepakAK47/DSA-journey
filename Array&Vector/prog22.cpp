#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);   // v.push_back() this syntax is use to add the element in the vector.
    v.push_back(2);
    v.push_back(3);
     v.push_back(4);
    v.push_back(5);
    v.push_back(6);
     v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.pop_back();    // v.pop_back()  this syntax is used to remove the element from the from the last.
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

// Note -> v.pop_back()  -> It do not change the capacity of the vector. It only changes the size of the vector.