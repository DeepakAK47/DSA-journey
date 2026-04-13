// Display of the sets elements
#include<iostream>
#include<unordered_set>
// Note both unordered_set and set are tw different things.
#include<vector>
using namespace std;
int main(){
unordered_set<int>s;
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);
s.erase(20);  // removing element
// Printing all the elements of set
for(int ele : s){ // : means in
    cout<<ele<<" ";
}
    return 0 ;
}