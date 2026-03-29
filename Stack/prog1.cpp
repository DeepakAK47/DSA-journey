// WAP to insert the element into the stack and print all the elements according to the order of insertion
#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>st;
stack<int>temp;
// Inserting elements in st stack
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
cout<<st.size()<<endl;
while(st.size()!=0){
    temp.push(st.top());
    st.pop();
}
// Printing stack elements
while(temp.size()!=0){
    cout<<temp.top()<<endl;
    temp.pop();
}
return 0;
}