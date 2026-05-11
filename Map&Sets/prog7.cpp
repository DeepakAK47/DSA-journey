// top view of tree
#include<iostream>
#include<unordered_map>
#include<queue>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    // constructor
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// display function
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

// map function
void topview(Node* root){
    unordered_map<int,int>mp; // (level,root)
    queue< pair<Node*,int> >q;
    pair<Node*,int>r;
    r.first = root;
    r.second = 0;
    q.push(r);
    while(q.size() > 0){
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(mp.find(level)==mp.end()){
            mp[level] = temp->val;
        }
        // if temp left is present
        if(temp->left!=NULL){
            pair<Node*,int>p;
            p.first = temp->left;
            p.second = level-1;
            q.push(p);
        }
        // if temp right also present
        if(temp->right!=NULL){
            pair<Node*,int>p;
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }   
    }
// finding min and max level
int minLevel = INT_MAX;
int maxLevel = INT_MIN;
for(auto p : mp){
    int level = p.first;
    minLevel = min(minLevel,level);
    maxLevel = max(maxLevel,level);
}
// printing element of hash map
for(int i=minLevel;i<=maxLevel;i++){
    cout<<mp[i]<<" ";
}
cout<<endl;
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    // display function
    // display(a);
    // topView function
    topview(a);
    return 0;
}