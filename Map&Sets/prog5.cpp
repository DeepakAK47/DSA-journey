// Insertion of data into hash map
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>mp; // It stores data in key-value format
    pair<string,int>p1;
    p1.first = "deepak";
    p1.second = 234;
    mp.insert(p1);
    pair<string,int>p2;
    p2.first = "Kinjal";
    p2.second = 2334;
    mp.insert(p2);
    pair<string,int>p3;
    p3.first = "abhash";
    p3.second = 23234;
    mp.insert(p3);
    // printing name and roll number of map
    for(pair<string,int> p : mp){
        cout<<p.first<<" "<<p.second<<" ";
    }
    return 0;
}