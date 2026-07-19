//IMP
// WAP to implementation of stack using LinkList
#include<iostream>
using namespace std;
// User define datatype
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
// User define data structure
class Stack{
    public:
Node* head;
int size;
Stack(){
    size = 0;
    head = NULL;
}
void push(int val){
Node* temp = new Node(val);
temp->next = head;
head = temp;
size++;
}
void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// Function for removing Node
void pop(){
if(head==NULL){
    cout<<"Stack is underflow"<<endl;
    return;
}
head  = head->next;
size--;
}
void top(){
    if(head==NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<head->val;
}
// Fuction for fiding the size of stack
void size1(){
    cout<<"The size of stack is : "<<size<<endl;
}
};
int main(){
    Stack st;
    // Adding new ListNode in stack
    st.pop();  // Checking for onderflow condition
    st.top(); // Checking for overflow condition
    st.push(10);
    st.display();
    st.push(20);
    st.display();
    st.push(30);
    st.display(); 
    // removing Node from stack
    st.pop();
    st.display();
    st.size1();
    return 0;
}