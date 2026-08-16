// DOUBT : Why is it not printing all the elements of the LinkedList
#include<iostream>
using namespace std;
// user define datatype
class Node{
    public:
    int val;
    Node* next;
    // constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
// user define data structure
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    // constructor
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtBeg(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    // display function
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};
int main(){
LinkedList ll;
ll.insertAtBeg(10);
ll.display();
ll.insertAtBeg(10);
ll.display();
    return 0;
}