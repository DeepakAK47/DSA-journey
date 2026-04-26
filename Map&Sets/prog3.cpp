// Try to insert the duplicate elements in sets
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    display using loop
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}

// Note -> It is not displaying because set is not a linear data structure.