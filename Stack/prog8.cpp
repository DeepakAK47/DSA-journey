// IMP
// WAP to implementation of stack using vector (with their all conditions)
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Stack {
public :
vector<int>v;
Stack(){       // Constructor
}
// Fucntion for adding new element in stack
void push(int val){
    v.push_back(val);
}
// function for removing the top most element in array
void pop(){
    if(v.size()==0){
        cout<<"Stack is underlow"<<endl;
        return;
    }
    v.pop_back();
}
// function printing the top element of stack
int top(){
    if(v.size()==0){
        cout<<"Top element does not exits"<<endl;
        return -1;
    }
    return v[v.size()-1];
}
int size(){
    if(v.size()==0){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return v.size();
}
void display(){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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