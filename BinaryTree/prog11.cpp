// WAP to print all the elements of the nth level of tree
#include<iostream>
using namespace std;
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
void levelPrint(TreeNode* root,int curr,int target){
    if(root==NULL) return;
    else if(curr==target){ 
        cout<<root->val<<" ";
    }
    levelPrint(root->left,curr+1,target);
    levelPrint(root->right,curr+1,target);
}
int main(){
TreeNode* a = new TreeNode(1);
TreeNode* b = new TreeNode(2);
TreeNode* c = new TreeNode(3);
TreeNode* d = new TreeNode(4);
TreeNode* e = new TreeNode(5);
TreeNode* f = new TreeNode(6);
TreeNode* g = new TreeNode(7);
a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left = f;
c->right = g;
levelPrint(a,1,3);
    return 0;
}