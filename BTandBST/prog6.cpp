//(***)
// WAP to find the level of binary Tree 
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// Display function
void displayTree(Node* root){
if(root==NULL) return;
cout<<root->val<<" ";
displayTree(root->left);  // ! IMP
displayTree(root->right); // ! IMP
};

// Finding the level of binary Tree
int level(Node* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));    // VVIMP
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
displayTree(a);
cout<<"The level of tree is : "<<level(a);
return 0;
}