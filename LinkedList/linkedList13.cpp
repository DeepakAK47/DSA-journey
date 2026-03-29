// // Adding Node from last in LinkedLsit
// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int val;
// Node* next;
// Node(int val){
//     this->val = val;
//     this->next = NULL;
// }
// };
// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// void insertAtEnd(Node* head,int val){
//     Node* t = new Node(val);
//     while(head->next!=NULL){  // It traverse the whole linkedlist untill the null pointer is not found int their next
//         head = head->next;
//     }
//     head->next = t;
// }
// int main(){
//     Node*a = new Node(10);
//     Node*b = new Node(20);
//     Node*c = new Node(30);
//     Node*d = new Node(40);
//     Node*e = new Node(50);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     display(a);
//     insertAtEnd(a,60);
//     display(a);
//     return 0;
// }