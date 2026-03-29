//Insert the new node at the begining of the Linkedlist
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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtBeg(int val){
        Node* temp = new Node(val);
        if(size==0){
             head = tail = temp;
             size++;
        }
        else{
            temp->next = head;
            head = temp;
            size++;
        }
    } 
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
            cout<<endl;
    }
};
int main(){
LinkedList ll;
ll.insertAtBeg(10);
ll.display();
ll.insertAtBeg(20);
ll.display();
ll.insertAtBeg(30);
ll.display();
ll.insertAtBeg(40);
ll.display();
ll.insertAtBeg(50);
ll.insertAtBeg(60);
ll.insertAtBeg(70); 
ll.insertAtBeg(80);
ll.display();
    return 0;
}

// Doubt ==> Why are we using Node* head and Node* tail here instead of the int datatype
//ANS. because both head and tail are Node datatype.