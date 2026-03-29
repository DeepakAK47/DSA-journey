// (*)
// Reverse the k element of the queue
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>&q){
    int size = q.size();
    for(int i=0;i<size;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
// Code for reversing k elements of the queue
void reverse(queue<int>&q,int k){
    stack<int>st;
    int size = q.size();
    // Inserting starting k elements into stack
    for(int i=0;i<k;i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    // inserting all the elements of stack into queue again
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }
    // arranging the starting elements of the queue into its correct positions
    for(int i=0;i<size-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    display(q);
    reverse(q,3);
    display(q);
    return 0;
}