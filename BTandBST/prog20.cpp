// WAP to print the inorder element of the tree using itrative approach
#include<iostream>
#include<stack>
using namespace std;
// User define data type 
class Node{
    public :
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// display funtion
void display(Node* root){
    stack<Node*>st;
    st.push(root); 
    root = root->left;
    while(root!=NULL || st.size()!=0){  // very important line
    if(root!=NULL){
        st.push(root);
        root = root->left;
    }
    else{
        Node* temp = st.top();
        st.pop();
        cout<<temp->val<<" ";
        root = temp->right;
    }
}
}
int main(){
    Node* a  = new Node(10);
    Node* b  = new Node(20);
    Node* c  = new Node(30);
    Node* d  = new Node(40);
    Node* e  = new Node(50);
    Node* f  = new Node(60);
    Node* g  = new Node(70);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    return 0;
}