// WAP to delete node at a particular index
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
// Function adding new Node from the starting 
void insertAtBeg(int val){
    Node* temp = new Node(val);
    if(size==0){
        head = tail = temp;
        size++;
    }
    else{
        temp->next = head;
        head  =  temp;
        size++;
    }
}
// Function adding new Node from the end
void insertAtEnd(int val){
Node* temp = new Node(val);
if(size==0){
    insertAtBeg(val);
    size++;
}
else{
    tail->next = temp;
    tail = temp;
    size++;
}
}
// Function adding new Node at the specific position
void inserAtIdx(int idx,int val){
    if(idx==0){
        insertAtBeg(val);
    }
    else if(idx==size){
        insertAtEnd(val);
    }
    else if(idx<0 || idx >size){
        cout<<"It is an invalid index.";
    }
    else{
        Node* t = new Node(val);
        Node* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        size++;
    }
}
// Function for display the whole Node
void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// Function to print the Node value at the specific index
void getValIdx(int idx){
Node* temp = head;
if(idx<0 || idx >size){
cout<<"It is an invalid index."<<endl;
}
for(int i=0;i<=idx-1;i++){
temp = temp->next;
}
cout<<temp->val<<endl;
}
// Function to delete Node from head
void deleteAtBeg(int idx){
    Node* temp = head;
    temp = temp->next;
    head =  temp;
    size--;
}
// Function to delete Node form tail
void deleteAtend(int idx){
    Node* temp = head;
    for(int i=1;i<=idx-1;i++){
        temp = temp->next;
    }
    temp->next = NULL;
    tail = temp;
    size--;
}
// Note --> Be carefull here take i=1, becaise head is already present at the index i =1
// Function to delete Node at the specific idx
void deleteAtIdx(int idx){
    if(idx==0){
        deleteAtBeg(idx);
    }
    else if(idx==size){
        deleteAtend(idx);
    }
    else{
        Node* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        size--;
    }
}
};

int main(){
    LinkedList ll;
    ll.insertAtBeg(10);
    ll.display();
    ll.insertAtBeg(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.inserAtIdx(1,40);
    ll.display();
    ll.inserAtIdx(3,50);
    ll.display();
    // ll.getValIdx(2);
    ll.deleteAtBeg(0);
    ll.display();
    ll.deleteAtend(3);
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();
    return 0;
}