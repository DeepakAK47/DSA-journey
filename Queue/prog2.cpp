//(*)
// WAP to display elements of queue in normal order
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    for(int i=0;i<q.size();i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void displayReve(queue<int>&q){
    stack<int>st;
    // Inserting elements of queue into stack
    while(q.size()!=0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // Inserting elements of stack into queue again
    while(st.size()!=0){
        int x = st.top();
        // cout<<x<<" ";
        st.pop();
        q.push(x);
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
    display(q);
    displayReve(q);
    display(q);
    displayReve(q);
    display(q);
    // displayReve(q);
    // display(q);
    return 0;
}