// WAP to print the node elements of the tree level by level from (Right to left)
#include<iostream>
using namespace std;
// User define datatype 
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
// Finding the number of levels present in the tree
int levelFind(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(levelFind(root->left),levelFind(root->right));
}
void levelPrint(TreeNode* root,int currIdx,int targetIdx){
if(root==NULL) return;
else if(currIdx==targetIdx){
    cout<<root->val<<" ";
    return;  // Imp
}
levelPrint(root->right,currIdx+1,targetIdx);
levelPrint(root->left,currIdx+1,targetIdx);

}
int main(){
TreeNode* a = new TreeNode(10);
TreeNode* b = new TreeNode(20);
TreeNode* c = new TreeNode(30);
TreeNode* d = new TreeNode(40);
TreeNode* e = new TreeNode(50);
TreeNode* f = new TreeNode(60);
TreeNode* g = new TreeNode(70);
a->left =  b;
a->right = c;
b->left = d;
b->right = e;
c->left = f;
c->right = g;
int level = levelFind(a);
for(int i=1;i<=level;i++){
    levelPrint(a,1,i);
    cout<<endl;
}
    return 0;
}

// T.C = O(n)
// S.C = O(n)