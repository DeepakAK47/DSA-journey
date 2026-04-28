// use of ordered_set
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(29);
    s.insert(3);
    s.insert(678);
    s.insert(5);
    // printing all the elements of sets
    for(auto p : s){
        cout<<p<<" ";
    }
    return 0;
}
// Note : ordered set always store values in increasing order