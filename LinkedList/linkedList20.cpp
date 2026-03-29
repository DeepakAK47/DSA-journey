// WAP to delete a target Node(***)
#include<iostream>
using namespace std;
class Node{
    public:
int val;
Node* next;
Node(int val){
    this->val = val;
    this->next = NULL;
}
};
// display function
void display(Node* head){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->val<<" ";
    temp = temp->next;
}
}
// Function to delete the target Node
Node* deleteNode(Node* head,Node* target){
    Node* temp = head;
    if(target==head){
        head = head->next;
        return head;
    }
    while(temp->next!=target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
int main(){
Node* a = new Node(10);
Node* b = new Node(20);
Node* c = new Node(30);
Node* d = new Node(40);
Node* e = new Node(50);
Node* f = new Node(60);
a->next = b;
b->next = c;
c->next = d;
d->next = e;
Node* head = a;
cout<<"The original linkedlist is : ";
display(head);
cout<<endl;
head = deleteNode(head,a);
cout<<"linkedList after deleting the target node : ";
display(head);
cout<<endl;
    return 0;
}