// WAP for reversing the given stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>st1;
stack<int>st2;
stack<int>st3;
stack<int>st4;
st1.push(10);
st1.push(20);
st1.push(30);
st1.push(40);
st1.push(50);
// 10 20 30 40 50
while(st1.size()!=0){
    st2.push(st1.top());
    st1.pop();
}
// 50 40 30 20 10
while(st2.size()!=0){
    st3.push(st2.top());
    st2.pop();
}
// 10 20 30 40 50
while(st3.size()!=0){
    st1.push(st3.top());
    st3.pop();
}
// printing the values of st3
while(st1.size()!=0){
    cout<<st1.top()<<" ";
    st1.pop();
}
return 0;
}