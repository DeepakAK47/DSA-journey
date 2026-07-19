Try Again
// WAP for the conversion of infinx to postfix where bracket is not present in string
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int priority(char ch){
    if(ch=='*' || ch=='/') return 2;
    else if(ch=='+' || ch=='-') return 1;
}
int main(){
    string str = "2+6*4/8-3";
    stack<string>st;
    stack<char>ch;
    for(int i=0;i<str.size();i++){
        if(str[i]>=48 && str[i]<=57){
            st.push(string(1,str[i]));   // string(count, character)
        }
        else if(ch.size()==0){
            ch.push(str[i]);
        }
        else if( priority(str[i]) > priority(ch.top()) ){
            ch.push(str[i]);
        } 
        else if( priority(str[i])<=priority(ch.top()) ){
            while(ch.size()>0 && priority( ch.top() ) >= priority( str[i]) ){
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                char op = ch.top();
                string ans = s2+s1+op;
                ch.pop();
                st.push(ans);
            }
            ch.push(str[i]);
        }
    }
    // Performing operation while stack ch is not empty
    while(ch.size()!=0){
        string s1 = st.top();
        st.pop();
        string s2 = st.top();
        st.pop();
        char op = ch.top();
        ch.pop();
        string ans = s2+s1+op;
        st.push(ans);
    }
    cout<<st.top();
    return 0;
}