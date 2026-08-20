// Most important
// Traversal of the boundary node of the tree
#include<iostream>
#include<queue>
#include<climits> // This header file is used for using the INT_MIN function
using namespace std;
// defining node data type
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
// constructor function
Node* construct(int arr[],int size){
queue<Node*>q;
Node* root = new Node(arr[0]);
q.push(root);
int i=1;
int j=2;
while(q.size()!=0 && i<size){
    Node* temp = q.front();
    q.pop();
    Node* l;
    Node* r;
    // inserting left right elements into the temp
    if(arr[i]!=INT_MIN) l = new Node(arr[i]);
    else l = NULL;
    if(j<size && arr[j]!=INT_MIN) r = new Node(arr[j]);
    else r = NULL;
    temp->left = l;
    temp->right = r;
    i = i+2;
    j = j+2;
    if(l!=NULL) q.push(l);
    if(r!=NULL) q.push(r);
}
return root;
}
// finding the number of levels in the binary tree
int Level(Node* root){
    if(root==NULL) return 0;
    return 1 + max(Level(root->left),Level(root->right));
}
// display function as BFS
void display(Node* root,int curr,int target){
    if(root==NULL) return;
else if(curr==target){
    cout<<root->val<<" ";
    return;
} // IMP
    display(root->left,curr+1,target);
    display(root->right,curr+1,target);
}
// leftBoundary function
void leftBoundary(Node* root){
    if(root==NULL) return;
    else if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
// function for printing the leaf Node 
void leafNode(Node* root){
    if(root==NULL) return;
    else if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
    }
    leafNode(root->left);
    leafNode(root->right);
}
// Function for printing the right node
void rightBottom(Node* root){
    if(root==NULL) return;
    else if(root->left==NULL && root->right==NULL) return;
    rightBottom(root->right);
    if(root->right==NULL) rightBottom(root->left);
    cout<<root->val<<" ";
}

int main(){
    // construction of tree
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};  
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,size);
    // Calculating the number of levels in the binary tree
    int level = Level(root);
    // printing tree as BFS
    for(int i=1;i<=level;i++){
        display(root,1,i);
        cout<<endl;
    }
    // printinh left boundary elements
    cout<<"Printing element as per problem "<<endl;
    leftBoundary(root);
    cout<<endl;
    leafNode(root);
    cout<<endl;
    rightBottom(root->right);
    return 0;
}