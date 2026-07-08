//  -> VVVIMP
// Find the number of ways to reduce n to 1(Recursively)
// condition 1 : if n divisible by 2 divide it
// condition 2 : if n is divisible by 3 divite it by 3
// else subtrat by n by -1

// method 1(Recursive approach)
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
// Note  1 is added here becasue it takes one step going from original case to min({f(n-1),(n%2==0) ? f(n/2):x,(n%3==0) ? f(n/3):x}); case.