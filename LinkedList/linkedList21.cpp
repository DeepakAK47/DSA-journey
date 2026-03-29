// WAP to find the middle node of the LinkedList(***)
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
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
Node* middleNode(Node* slow,Node* fast){
    while(fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
    e->next = f;
    Node* head = a;
    display(head);
  Node* midVal =   middleNode(head,head);
    cout<<midVal->val;
    return 0;
}