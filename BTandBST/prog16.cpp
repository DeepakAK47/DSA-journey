// WAP printing the nodes of the tree level by level using queue data structure
#include<iostream>
#include<queue>
using namespace std;
// USer define data type
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int main(){
    queue<TreeNode*>q;
TreeNode* a = new TreeNode(10);
TreeNode* b = new TreeNode(20);
TreeNode* c = new TreeNode(30);
TreeNode* d = new TreeNode(40);
TreeNode* e = new TreeNode(50);
TreeNode* f = new TreeNode(60);
TreeNode* g = new TreeNode(70);
a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left = f;
c->right = g;
// Pushing the first element into the queue
q.push(a);
// Printing the elements of the queue
while(q.size()!=0){     
    TreeNode* x = q.front();
    if(x->left!=NULL){
        q.push(x->left);
    }
    if(x->right!=NULL){
        q.push(x->right);
    }
    cout<<x->val<<" ";
    q.pop();
}
    return 0;
} 