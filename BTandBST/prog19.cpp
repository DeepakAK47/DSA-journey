// WAP to print the elements of the tree in the post order by using itrative approach
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// display funtion in post order
void display(Node* root){
    vector<Node*>v;
    stack<Node*>st;
    st.push(root);
    while(st.size()!=0){
        Node* y = st.top();
        v.push_back(y);
        st.pop();
        if(y->left!=NULL) st.push(y->left);
        if(y->right!=NULL) st.push(y->right);
    }
    // printing the vector elements in reverse pattern
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]->val<<" ";
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