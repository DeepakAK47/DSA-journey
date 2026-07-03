#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Display(vector<int>v, int x, int y){
    for(int i = 0;i<x;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int x = v.size();
    int y = v.capacity();
    Display(v,x,y);   // Note -> Pass the argument according to the datatype.
    return 0;
}