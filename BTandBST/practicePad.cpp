// WAP to print elements of node level wise
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left=right=NULL;
    }
};
// display function
void display(Node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
void displayLevel(Node* root,int start,int target){
    if(root==NULL)return;
    else if(start==target){
        cout<<root->val<<" ";
    }
    displayLevel(root->left,start+1,target);
    displayLevel(root->right,start+1,target);
}
// finding level funciton
int level(Node* root){
if(root==NULL)return 0;
return 1 + max(level(root->left),level(root->right));
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    int levelTree = level(a);
    cout<<"The level of tree is : "<<levelTree<<endl;
    for(int i=1;i<=levelTree;i++){
       displayLevel(a,1,i); 
       cout<<endl;
    }
    return 0;
}