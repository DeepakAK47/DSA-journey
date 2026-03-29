// (***)
// WAP to display the tree node using the itrative approach(pre order)
#include<iostream>
#include<stack>
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
void display(TreeNode* root){
    stack<TreeNode*>st;
    st.push(root);
    while(st.size()!=0){
        TreeNode* y = st.top();
        cout<<y->val<<" ";
        st.pop();
        if(y->right!=NULL) st.push(y->right);
        if(y->left!=NULL) st.push(y->left);
    }
}
int main(){
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
    display(a);
    return 0;
}