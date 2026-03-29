//(***)
// WAP for deleting LinkLis from begging,end,atIdx
#include<iostream>
using namespace std;
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
}
class LinkList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkList(){
        head = tail = NULL;
        size = 0;
    }
    // delete from starting 
    void deleteAtBeg(){
        if(size==0){
            cout<<"LinkList is empty";
            break;
        }
        else{
            head = head->next;
            head->prev = NULL;
            size--;
        }
    }
}
int main(){
    LinkList ll;
    ll.deleteAtBeg()
}