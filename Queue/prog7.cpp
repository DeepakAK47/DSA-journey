//(*)
// WAP implemnetation of queue using LinkedList
#include<iostream>
using namespace std;
// user define datatype
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
// User define data structure 
class queue{
public:
Node* head;
Node* tail;
int size;
queue(){
    head = tail = NULL;
    size = 0;
}
// push function
void push(int val){
    Node* temp = new Node(val);
    if(size==0){
        head = tail= temp;
    }
    else {
    temp->next = head;
    head = temp;
    }
    size++;
    cout<<endl;
}
// pop function
void pop(){
    if(size==0){
        cout<<"Queue is empty";
    }
    else{
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        tail = temp;
        temp->next = NULL;
        size--;
    }
    cout<<endl;
}
// back function
void back(){
    if(size==0){
        cout<<"Queue is empty";
    }
    else{
        cout<<head->val;
    }
    cout<<endl;
}
// front function
void front(){
    if(size==0){
        cout<<"Queue is empty";
    }
    else{
        cout<<tail->val;
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
void size1(){
cout<<"The size of the LinkedList is : "<<size;
cout<<endl;
}
};
int main(){
    queue q;
    q.push(10);
    q.display();
    q.push(20);
    q.display();
    q.push(30);
    q.display();
    q.push(40);
    q.display();
    q.pop();
    q.display();
    q.pop();
    q.display();
    q.front();
    q.back();
    q.size1();
}