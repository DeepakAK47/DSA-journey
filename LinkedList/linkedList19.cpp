// WAP to perform deletion at beging,ending and the specific position in linkedList
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
linkedlist(){
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
// Function for deleting element from starting
void deleteAtBeg(){
if(size==0){
    cout<<"linkedList id empty";
}
else{
    Node* temp = head;
    temp = temp->next;
    head = temp;
    size--;
}
}
// Function for deleting element from end
void deleteAtEnd(){
    if(size==0){
        cout<<"LinkedList is empty";
        return;
    }
    if(size==1){
        deleteAtBeg();
        return;
    }
        Node* t = head;
            for(int i=1;i<size-1;i++){
                t = t->next;
            }
            t->next = NULL;
            tail = t;
            size--;
    }
    // Function for deleting linkedList at particular idx
    void deleteAtIdx(int idx){
        if(idx<0 || idx>size){
            cout<<"Index out of bound";
        }
        else if(idx==0){
            deleteAtBeg();
        }
        else if(idx==size){
            deleteAtEnd();
        }
        Node* t = head;
        for(int i=0;i<idx-1;i++){
            t = t->next;
        }
        if(idx==1){
            t->next = t->next->next;
            size--;
        }
        else{
        t->next = t->next->next;
        size--;
        }
    }
// function for displaying element of the linkedlist
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
    linkedlist ll;
    ll.insertAtBeg(10);
    ll.display();
    ll.insertAtBeg(20);
    ll.display();
    ll.insertAtBeg(30);
    ll.display();
    ll.insertAtBeg(40);
    ll.display();
    ll.insertAtBeg(50);
    ll.display();
    ll.insertAtBeg(60);
    ll.display();
    // deleting element from starting

    // ll.deleteAtBeg();
    // ll.display();
    // ll.deleteAtBeg();
    // ll.display();
    // ll.deleteAtBeg();
    // ll.display();
    // ll.deleteAtBeg();
    // ll.display();
    // ll.deleteAtBeg();
    // ll.display();
    // ll.deleteAtBeg();
    // ll.display();

    // deleting Node from end

    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtEnd();
    ll.display();

    // deleting linkedList at the particular index
    // ll.deleteAtIdx(2);
    // ll.display();
    // ll.deleteAtIdx(1);
    // ll.display();
    // ll.deleteAtIdx(0);
    // ll.display();
    // ll.deleteAtIdx(3);
    // ll.display();
    return 0;
}