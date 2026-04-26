// use of s.find() STL
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    if(s.find(400)!=s.end()){
        cout<<"It exist in the set";
    }
    else{
        cout<<"It does not exist in the set";
    }
    return 0;
}
// Note : s.find() -> It takes O(1) time complexity in searching.