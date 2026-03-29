#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    cout<<v.capacity()<<" ";
    cout<<v.size()<<" ";
    cout<<endl;
    v.push_back(2);
       cout<<v.capacity()<<" ";
    cout<<v.size()<<" "<<endl;
    v.push_back(3);
       cout<<v.capacity()<<" ";
    cout<<v.size()<<" "<<endl;
    v.push_back(4);
       cout<<v.capacity()<<" ";
    cout<<v.size()<<" "<<endl;
    return 0;
}

// Note -> capacity means number of spaces are available for filling element
// Note -> Size of the vector means how many elements are present in the vector.
