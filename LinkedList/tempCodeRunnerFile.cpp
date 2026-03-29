// WAP to delete Node from ending of linkedList
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
class linkedlist{
    public:
Node* head;
Node* tail;
int size;
linkedList(){
    head =  tail = NULL;
    size = 0;
}
    // function adding new Node from starting
    void insertAtBeg(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
// function for displaying element of the linkedList
void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
};
int main(){
    linkedList ll;
    ll.insertAtBeg(10);
    ll.display();
    ll.insertAtBeg(20);
    ll.display();
    ll.insertAtBeg(30);
    ll.display();
    ll.insertAtBeg(40);
    ll.display();
    return 0;
}