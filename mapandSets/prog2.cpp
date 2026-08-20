// WAP to find the particular element in the set
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(50);
    // display all the elements of set 
    for(int ele : s){
        cout<<ele<<" ";
    }
    // finding target element
    int target = 20;
    if(s.find(target)!=s.end()){
        cout<<target<<" exist";
    }
    else{
        cout<<"Taerget element does not exist";
    }
    return 0;
}