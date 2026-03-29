// Write the program to insert the new Node at the specific position of in the LinkedList
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
    // Function for inserting New Node from the starting
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
    // Display function
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    // Adding new Node at the end of the LinkedList
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
            size++;
        }
        else{
            tail->next = temp;
            tail = temp;
            size++;
        }
    }
    // Adding new Node from at the specific index
    void insertAtIdx(int idx,int val){
        if(idx==0){
            insertAtBeg(val);
            size++;
        }
        else if(idx==size){
            insertAtEnd(val);
            size++;
        }
        else if(idx<0 || idx> size){
            cout<<"It is an invalid syntax";
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
};
int main(){
    LinkedList ll;
    ll.insertAtBeg(10);
    ll.display();
    ll.insertAtBeg(20);
    ll.display();
    ll.insertAtBeg(30);
    ll.display();
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtIdx(2,67);
    ll.display();
    return 0;
}