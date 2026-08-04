// Add a new element at bottom in the stack using recursion
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&st){
    if(st.size()==0){
        return;
    }
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    display(st);
    st.push(x);          
}
// adding new element form bottom 
void addAtBottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);               // !! IMORTANT
        return;
    }
    int x = st.top();
    st.pop();
    addAtBottom(st,val);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    addAtBottom(st,100);
    display(st);
    cout<<endl;
    return 0;
}