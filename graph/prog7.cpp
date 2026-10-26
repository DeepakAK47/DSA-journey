// finding the sortest path fro src to des
#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visited;
void addGp(int src,int des,bool bi_dir){
    graph[src].push_back(des);
    if(bi_dir==true){
        graph[des].push_back(src);
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

void bfs(int src,vector<int>&dist){
    queue<int>qu;
    visited.clear();
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while(not qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neighbour : graph[curr]){
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}

int main(){
// vertex input
int v;
cin>>v;
// edges input 
int e;
cin>>e;
graph.clear();
graph.resize(v,list<int>());
while(e!=0){
    int src,des;
    cin>>src>>des;
    addGp(src,des,true);
    e--;
}
// display graph
display();

// BFS logic
int x;
cin>>x;
vector<int>dist;
dist.clear();
dist.resize(v,INT_MAX);
bfs(x,dist);
// display all the ele of the dist vector
for(int i=0;i<dist.size();i++){
    cout<<dist[i]<<" ";
}
    return 0;
}