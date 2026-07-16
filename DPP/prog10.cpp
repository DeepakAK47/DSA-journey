// DOUBT
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N; // number of boxes
    cin>>N;
    // number of ranges into which we have to put coins
    int M;
    cin>>M;
    vector<pair<int,int>>ranges(M);
    for(int i=0;i<M;i++){
        cin>>ranges[i].first>>ranges[i].second;
    }
    // number of querries
    int Q;
    cin>>Q;
    vector<int>queries(Q);
    for(int i=0;i<Q;i++){
        cin>>querries[i];
    }
    // find output
    vector<int>ans(Q);
    for(int i=0;i<M;i++){
        for(int j=0;j<Q;j++){
            int x = 0;
            if(queries[j]>= ranges[i].first)
        }
    }
    return 0;
}