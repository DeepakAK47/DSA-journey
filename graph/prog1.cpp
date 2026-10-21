// Implementation of graph using adjacent list
#include<iostream>
#include<list>
#include<vector>
using namespace std;
vector<list<int>>graph;
//
void add_edge(int src,int dest,bool bi_dir = true){
    // for directed graph
    graph[src].push_back(dest);
    // for undirected grapg
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
// display function
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}
int main(){
    // input number of verices
    int v;
    cin>>v;
    graph.resize(v,list<int>());
    // input number of edges
    int e;
    cin>>e;
    while(e!=0){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
        e--;
    }
    display();
    return 0;
}
