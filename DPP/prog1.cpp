// Find the number of ways to reduce n to 1(Recursively)
// method 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<climits>
int f(int n){
    int x = INT_MAX;
    if(n==1) return 0;
    if(n==2 || n==3 ) return 1;
    return 1+min({f(n-1),(n%2==0) ? f(n/2):x,(n%3==0) ? f(n/3):x});  // for finding the minimum value more than two two digits use {}
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<f(n)<<" ";
    return 0;
}