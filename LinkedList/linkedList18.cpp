// WAP to to perform insertion at begin,insertion at end and insertion at the specific postion in linkedList

#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* next;
// Constructor
Node(int val){
    this->val = val;
    this->next = NULL;
}
};
class linkedList{
    public:
Node* head;
Node* tail;
int size;
// constructor
linkedList(){
    head = tail = NULL;
    size = 0;
}
// Function adding new Node from ending
void insertAtEnd(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
}
// Function for adding new Node from starting
void insertAtBeg(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        temp->next =  head;
        head = temp;
    }
    size++;
}

// Function to insert element at particular index
void insertAtIdx(int val,int idx){
    Node* temp = new Node(val);
    if(idx==0){
        insertAtBeg(val);
    }
    else if(idx==size){
        insertAtEnd(val);
    }
    else if(idx<0 || idx>size){
        cout<<"Index out of  bound"<<endl;
    }
    else {
        Node* t = head;
        for(int i=0;i<idx-1;i++){
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
        size++;
    }
}
// Function to display all the element of the linkedList
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
    linkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtEnd(50);
    ll.display();
    // Adding new Node from the starting
    ll.insertAtBeg(100);
    ll.display();
    ll.insertAtBeg(110);
    ll.display();
    ll.insertAtBeg(120);
    ll.display();
    ll.insertAtBeg(130);
    ll.display();
    
    // Adding new element at the specific index
    ll.insertAtIdx(10,0);
    ll.display();
    ll.insertAtIdx(99,3);
    ll.display();
    ll.insertAtIdx(98,8);
    ll.display();
    ll.insertAtIdx(97,12);
    ll.display();
    return 0;
}