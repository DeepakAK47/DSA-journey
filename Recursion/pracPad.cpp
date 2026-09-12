// WAP to print nth fibonacci term
// 1 1 2 3 5 8 13 21 34 55 
#include<iostream>
#include<vector>
using namespace std;
void nachi(int n,vector<int>&fibbo){
    if(n==0){
        return;
    }
    int ans = fibbo[fibbo.size()-1] + fibbo[fibbo.size()-2];
    fibbo.push_back(ans);
    nachi(n--,fibbo);
}
int main(){
    int n;
    cin>>n;
    vector<int>fibbo;
    fibbo.push_back(1);
    fibbo.push_back(1);
    nachi(n-2,fibbo);
    cout<<fibbo[fibbo.size()-1];
    return 0;
}