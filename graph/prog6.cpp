// finding all the path of from src to des 
#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visited;
vector<vector<int>>result;

void gp_add(int src,int des,bool bi_dir){
    graph[src].push_back(des);
    if(bi_dir==true){
        graph[des].push_back(src);
    }
}

//  display function
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}

// dfs logic : it checks whether their is a path exist from starting to end or not
void dfs(int curr,int end,vector<int>&path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){  // 1 for visited and 0 for not visited
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

// any_path function
void anyPath(int src,int des){
    vector<int>path;
    dfs(src,des,path);
}

int main(){
int v;
cin>>v;
int e;
cin>>e;
graph.clear();
visited.clear();
graph.resize(v,list<int>());
while(e!=0){
    int src,des;
    cin>>src>>des;
    gp_add(src,des,true);
    e--;
}
int x,y;
cin>>x>>y;
anyPath(x,y);
display();
// display all the path of the destination ele
for(auto path : result){
    for(auto ele : path){
        cout<<ele<<" ";
    }
    cout<<endl;
}
    return 0;
}
