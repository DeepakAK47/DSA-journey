//(***)
// WAP for insertion of Node doubly LinkedList(tail,head.index) by class
#include<iostream>
using namespace std;
// USer define datatype
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// User define clas 
class LinkList{
    public:
Node* head;
Node* tail;
int size;
LinkList(){
    head = tail = NULL;
    size = 0;
}
// Insert at begging 
void insertAtBeg(int val){
Node* temp = new Node(val);
if(size==0){
    head = tail = temp;
    size++;
}
else{
    head->prev = temp;
    temp->next = head;
    head = temp;
    size++;
}
}
// Insert at end
void insertAtEnd(int val){
Node* temp = new Node(val);
if(size==0){
    head = tail = temp;
    size++;
}
else{
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    size++;
}
}
// Insert at specific position
void insertAtIndex(int val, int idx){
Node* temp = new Node(val);
if(size==0){
    head = tail = temp;
    size++;
}
else{
    Node* temp2 = head;
for(int i=1;i<idx;i++){
    temp2 = temp2->next;
}
temp->next = temp2->next;
temp2->next->prev = temp;
temp2->next = temp;
temp->prev = temp2;
size++;
}
}

// display function
void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// display LinkList in reverse manner
void displayRev(){
    Node* temp = tail;
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}

// Delete Node at begging
    // delete from starting 
    void deleteAtBeg(){
        if(size==0){
            cout<<"LinkList is empty";
        }
        else{
            cout<<"the deleted element is : "<<head->val;
            head = head->next;
            head->prev = NULL;
            size--;
        }
        cout<<endl;
    }

    // delete Node from end
void deleteAtEnd(){
    if(size==0){
        cout<<"LinkedList is empty";
        return;
    }
    else if(size==1){
        cout<<"The deleted element is : "<<head->val;
        delete head;
        head = tail = NULL;
        size--;
    }
    else{
        cout<<"The deleted element from the List is : "<<tail->val;
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        size--;
    }
    cout<<endl;
}

// function for deleting Node at the particular Idx
void deleteAtIdx(int idx){
    if(size==0){
        cout<<"LinkedList is empty";
        return;
    }
else if(idx==1){
    deleteAtBeg();
}
else if(idx==(size-1)){
    deleteAtEnd();
}
else{
    Node* temp = head;
    for(int i=1;i<idx;i++){
        temp = temp->next;
    }
    cout<<"The delete element at index : "<<idx<<" is :"<<temp->next->val;
    Node* temp2 = temp;
    temp->next = temp->next->next;
    temp = temp->next->next;
    temp->prev = temp2;
    size--;
}
cout<<endl;
}
};
int main(){
    LinkList ll;
    // Insert at begging
    ll.insertAtBeg(10);
    ll.display();
    ll.insertAtBeg(20);
    ll.display();
    // ll.insertAtBeg(30);
    // ll.display();
    // ll.insertAtBeg(40);
    // ll.display();
    // Insert at end
    ll.insertAtEnd(50);
    ll.display();
    ll.insertAtEnd(60);
    ll.display();
    ll.insertAtEnd(70);
    ll.display();
    ll.insertAtEnd(80);
    ll.display();
    // Insert at specific position
    ll.insertAtIndex(700,2);
    ll.display();
    // Reverse function
    // ll.displayRev();

    // Delete at begging 
    ll.deleteAtBeg();
    ll.display();
    // Delete from end
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
};

// Note --> doubt in deleting List from the end 