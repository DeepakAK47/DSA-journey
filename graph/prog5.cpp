// Find whether a path exist from src to des for a particulat vertex using DFS traversal
#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visited;

void gp_add(int src,int des,bool bi_dir){
    graph[src].push_back(des);
    if(bi_dir==true){
        graph[des].push_back(src);
    }
}

//  display function
void display(){
    for(int i=1;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}

bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){  // 1 for visited and 0 for not visited
            bool result = dfs(neighbour,end);
            if(result==true) return true;
        }
    }
    return false;
}

// any_path function
bool anyPath(int src,int des){
    return dfs(src,des);
}

int main(){
int v;
cin>>v;
int e;
cin>>e;
graph.clear();
visited.clear();
graph.resize(v+1,list<int>());
while(e!=0){
    int src,des;
    cin>>src>>des;
    gp_add(src,des,true);
    e--;
}
int x,y;
cin>>x>>y;
cout<<anyPath(x,y)<<" \n ";
display();
    return 0;
}