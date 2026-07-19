// -> This problem can be solved easily using hash map
// WAP which remove all the duplicate character in a string
#include<iostream>
#include<stack>
using namespace std;
void display(stack<char>st){
    if(st.size()==0){
        return;
    }
    char ch = st.top();
    st.pop();
    display(st);
    cout<<ch;
    st.push(ch);
}
int main(){
    stack<char>st;
    string str = "aaabbssddeeggg";
    for(int i=0;i<str.size()-1;i++){
        if(str[i]!=str[i+1]){
            st.push(str[i]);
        }
    }
    // Printing the element of the stack recursively
    display(st);
    return 0;
}
