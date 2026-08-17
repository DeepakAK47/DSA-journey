// Display all the sets elements
#include<iostream>
#include<unordered_set> //used for using unordered_set
// Note both unordered_set and set are two different things.
#include<vector>
using namespace std;
int main(){
unordered_set<int>s;
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);
// Printing all the elements of set
for(int ele : s){ // : means in
    cout<<ele<<" ";
}
// printing size of set
cout<<s.size()<<" ";

    return 0 ;
}