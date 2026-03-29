// WAP program which prints the element present at the specified position
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
        size++;
    }
    else if(idx==size){
        insertAtEnd(val);
        size++;
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
for(int i=0;i<=idx-1;i++){
temp = temp->next;
}
cout<<temp->val<<endl;
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
    ll.getValIdx(2);
    return 0;
}