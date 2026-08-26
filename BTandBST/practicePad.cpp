// WAP to find the sum of all the node values
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    // constructor
    Node(int val){
        this->val = val;
        left=right=NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    if(temp==NULL){
        return;
    }
    cout<<temp->val<<" ";
    display(temp->left);
    display(temp->right);
}
// sum function
int sum(Node* head){
    Node* temp = head;
    if(temp==NULL) return 0;
    return temp->val + sum(temp->left) + sum(temp->right);
}
int size(Node* head){
    Node* temp = head;
    if(temp==NULL){
        return 0;
    }
    return 1 + size(temp->left) + size(temp->right);
}
// searching the max value of node
int deep(Node* head){
    Node* temp = head;
    if(temp==NULL){
        return INT_MIN;
    }
        return max(temp->val,max(deep(temp->left),deep(temp->right)));
}
// prod funciton
int prod(Node* head){
    Node* temp = head;
    if(temp==NULL)return 1;
    return temp->val* prod(temp->left) * prod(temp->right);
}
// noLevels
int level(Node* head){
    Node* temp = head;
    if(temp==NULL) return 0;
    return 1 + max(level(temp->left),level(temp->right));
}
// nth level printing 
void levelPrint(Node* head,int curr,int target){
Node* temp = head;
if(temp==NULL) return;
else if(curr==target){
    cout<<temp->val<<" ";
}
levelPrint(temp->left,curr+1,target);
levelPrint(temp->right,curr+1,target);
}

int main(){
Node *a = new Node(1);
Node *b = new Node(2);
Node *c = new Node(3);
Node *d = new Node(4);
Node *e = new Node(5);
Node *f = new Node(6);
Node *g = new Node(7);
Node *h = new Node(8);
a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left = f;
c->right = g;
d->left = h;
// display function
display(a);
cout<<endl;
// sum function
int sumAns = sum(a);
cout<<sumAns<<endl;
// size of binary tree
int sizeTree = size(a);
cout<<sizeTree;
cout<<endl;
// Node with maximum value
int maxNode = deep(a);
cout<<maxNode<<endl;
// product function
int prodAns = prod(a);
cout<<prodAns<<endl;
// levels in BT 
int noLevel = level(a);
cout<<noLevel<<endl; 
// print nth level of BT
levelPrint(a,1,4);
// print Nodes level by level

return 0;
}