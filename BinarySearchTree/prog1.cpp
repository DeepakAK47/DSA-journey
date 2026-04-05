// Q. What is the maximum height of the BST?
// ANS. n

class Solution {
public:
// defining the insert function
    void insert(TreeNode* root,int val){
        // base condition

        // if root is null
        if(root==NULL) return;
        // if val is smaller than the root val
        else if(root->val>val){
             if(root->left==NULL){
                root->left = new TreeNode(val);
             }
             else{
                insert(root->left,val);
             }
        }
        // if val is smaller than root val
        else if(root->val < val ){
            if(root->right==NULL){
                root->right = new TreeNode(val);
            }
            else{
                insert(root->right,val);
            }
        }
    }
    // main fuction
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // defining the root value
        TreeNode* root = new TreeNode(preorder[0]);
        // loop 
        for(int i=1;i<preorder.size();i++){
            insert(root,preorder[i]);
        }
        return root;
    }
};