// traversal of graph in DFS
#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<int>>graph;
void gp_add(int src,int des,bool bi_dir){
    graph[src].push_back(des);
    if(bi_dir==true){
        graph[des].push_back(src);
    }
}
//  display function
void display(){
    for(int i=0;i<graph.size();i++){
        for(auto ele : graph[i]){
            cout<<i<<" ->  "<<ele<<" , ";
        }
        cout<<endl;
    }
}
int main(){
int v;
cin>>v;
int e;
cin>>e;
graph.clear();
graph.resize(v,list<int>());
while(e!=0){
    int src,des;
    cin>>src>>des;
    bool bi_dir;
    cin>>bi_dir;
    gp_add(src,des,bi_dir);
    e--;
}
display();
    return 0;
}