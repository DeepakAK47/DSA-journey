// Implementation of graph using adjacent list
// Note : bi_dir = false
#include<iostream>
#include<list>
#include<vector>
using namespace std;
vector<list<int>>graph;
//
void add_edge(int src,int dest,bool bi_dir = false){
    graph[src].push_back(dest);
    if(bi_dir==true){
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
    graph.resize(v,list<int>()); // resizing the size of vector and push empty list in each box of vector
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
