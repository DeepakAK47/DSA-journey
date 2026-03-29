// WAP to convert the infix operation to postfix where bracket is present in the string
// Error with this code
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='*' || ch=='/') return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return 0;
}
int main(){
   string str = "(7+9)*4/8-3";
    stack<string>st;
    stack<char>ch;
    for(int i=0;i<str.size();i++){
        if(str[i]>=48 && str[i]<=57){
            st.push(string(1,str[i]));
        }
        else if(ch.size()==0){
            ch.push(str[i]);
        }
        else if(str[i]=='('){
            ch.push(str[i]);
        }
        else if(str[i]==')'){
            while(ch.size()>0 && ch.top()!='('){
                 string s1 = st.top();
                 st.pop();
                 string s2 = st.top();
                 st.pop();
                 char op = ch.top();
                 ch.pop();
                 string ans = op+s2+s1;
                 st.push(ans);
            }
            ch.pop();
        }
        else if( priority(str[i]) > priority(ch.top()) ){
            ch.push(str[i]);
        }
        else if(priority(str[i]) <= priority(ch.top()) ){
             while(ch.size()>0 && priority( ch.top() ) >= priority( str[i]) ){
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                char op = ch.top();
                ch.pop();
                string ans = s2+s1+op;
                st.push(ans);
            }
            ch.push(str[i]);
        }
    }
    // Applying operation after the termination of the loop
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
    cout<<"the prefix expression is : "<<st.top();
    return 0;
}