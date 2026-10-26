// implementation of the weighted undirected graph
// Note : It is a 1 based vertex graph
#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<pair<int,int>>>graph;
// add function
void gp_add(int src,int des,int wt,bool bi_dir){
    graph[src].push_back({des,wt});
    if(bi_dir==true){
        graph[des].push_back({src,wt});
    }
}
void display(){
    for(int i=1;i<=graph.size();i++){
        cout<<i<<" --> ";
        for(auto ele : graph[i]){
            cout<<"("<<ele.first<<" "<<ele.second<< ")" << " , "; // IMP
        }
        cout<<endl;
    }
}
int main(){
    // input number of vertices
    int v;
    cin>>v;
    int e;
    cin>>e;
    graph.clear();
    graph.resize(v+1,list<pair<int,int>>());
    while(e!=0){
        int src,des,wt;
        cin>>src>>des>>wt;
        gp_add(src,des,wt,true);
        e--;
    }
    display();
    return 0;
}