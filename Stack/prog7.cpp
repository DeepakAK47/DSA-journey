// (*****)
// WAP to implementation of stack using array (with their all conditions)
#include<iostream>
using namespace std;
// This is the user define data structure
class Stack {
public :
int arr[5];
int idx;
// Constructor
Stack(){
     idx = -1;
}
// Fucntion for adding new element in stack
void push(int val){
    if(idx==4){
        cout<<"Stack is overflow"<<endl;
        return;
    }
    idx++;
    arr[idx] = val;
}
// function for removing the top most element in array
void pop(){
    if(idx==-1){
        cout<<"Stack is underlow"<<endl;
    }
    idx--;
}
// function printing the top element of stack
int top(){
    if(idx==-1){
        cout<<"Top element does not exits"<<endl;
    }
    return arr[idx];
}
int size(){
    if(idx==-1){
        cout<<"Stack is empty"<<endl;
    }
    return idx+1;
}
void display(){
    for(int i=0;i<=idx;i++){
        cout<<arr[i]<<" ";
    }
}
};
int main(){
    Stack st;
    st.top();
    st.size();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(100);
    cout<<st.size()<<endl;
    st.display();
    cout<<endl;
    st.pop();
    st.display();
    cout<<endl;
    cout<<st.top();
    cout<<endl;
    st.push(100);
    st.display();
    cout<<endl;
    return 0;
}