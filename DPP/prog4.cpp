// Find the number of minimum ways to reduce n to 0(recursion approach) 
// constraints : subtract the original number by maximum number which is present in the given digit ex 27 -> subtract this by 7
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int>digit(int n){
    vector<int>answer;
    while(n>0){
        int d = n%10;
        if(d!=0) answer.push_back(d);
        n = n/10;
    }
    return answer;
}
// f(n)
int f(int n){
    if(n==0) return 0;
    if(n>=1 && n<=9) return 1;
        // extracting all the ele of the vector
        vector<int>ele = digit(n);
        int val = INT_MAX;
        for(int i=0;i<ele.size();i++){
            val = min(val,f(n-ele[i]));
        }
    return 1 + val; 
}
int main(){
int n;
cout<<"Enter the value of n : ";
cin>>n;
int ans = f(n);
cout<<ans;
}