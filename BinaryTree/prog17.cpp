//(*****)
// WAP to make a tree and take the input of the tree from user
#include<iostream>
#include<queue>
#include<climits>
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
// construct function
TreeNode* construct(int arr[],int size){
    queue<TreeNode*>q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()!=0 && i<size){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i]!=INT_MIN) l = new TreeNode(arr[i]); 
        else l = NULL;
        if(j!=size && arr[j]!=INT_MIN) r = new TreeNode(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i = i+2;
        j = j+2;
    }
    return root;
}
int main(){
int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
int size = sizeof(arr)/sizeof(arr[0]);
TreeNode* root = construct(arr,size);
// printing Tree values using queue
queue<TreeNode*>q2;
q2.push(root);
while(q2.size()!=0){
    TreeNode* temp = q2.front();
    if(temp->left!=NULL) q2.push(temp->left);
    if(temp->right!=NULL) q2.push(temp->right);
    cout<<temp->val<<" ";
    q2.pop();
}
return 0;
}