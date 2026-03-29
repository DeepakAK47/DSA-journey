// WAP to implement queue using doubly LinkedList
#include<iostream>
using namespace std;
// This is userdefine datatype
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
// This is user define datastructure
class queue{
public:
Node* head;
Node* tail;
int size;
queue(){
    head = tail = NULL;
    size = 0;
}
// pushback funciton
void pushback(int val){
    Node* temp = new Node(val);
    if(size==0){
        head = tail = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head  = temp;
    }
    size++;
}
// pushfront funciton
void pushfront(int val){
    Node* temp = new Node(val);
    if(size==0){
        head = tail = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    size++;
}
// popback fucniton
void popback(){
    Node* temp = head;
    if(size==0){
        cout<<"Queue is empty";
    }
    else{
        head = head->next;
        head->prev = NULL;
        size--;
        delete(temp);
    }
}
// popfront function
void popfront(){
    Node* temp = tail;
    if(size==0){
        cout<<"Queue is empty";
    }
    else{
        tail = tail->prev;
        tail->next = NULL;
        size--;
        delete(temp);
    }
}
    // front function
    void front(){
        if(size==0){
            cout<<"Queue is empty";
        }
        else{
            cout<<"The front value of the queue is : "<<tail->val;
        }
        cout<<endl;
    }
    // back function
    void back(){
        if(size==0){
            cout<<"Queue is empty";
        }
        else{
            cout<<"The back value of queue is : "<<head->val;
        }
        cout<<endl;
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
};
int main(){
    queue q;
    q.pushback(10);
    q.display();
    q.pushback(20);
    q.display();
    q.pushfront(30);
    q.display();
    q.pushfront(40);
    q.display();
    q.front();
    q.back();
}