#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v(4,8);   // It create a vector of size 4 and give all the boxes value 8. This type of declaration is used when we have to give similar value.
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
return 0;
}