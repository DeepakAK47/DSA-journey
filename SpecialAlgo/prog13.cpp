// WAP to print the all the fator of the given number in O(rootn)
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n = 101;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}