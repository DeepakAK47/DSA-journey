Try Again
// WAP for postfix to prefix expression
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    string str = "79+4*8/3-";
    stack<string>st;
    for(int i=0;i<str.size();i++){
        if(str[i]>=48 && str[i]<=57){
            st.push(string(1,str[i]));
        }
        else{
            string x1 = st.top();
            st.pop();
            string x2 = st.top();
            st.pop();
            char op = str[i];
            string ans =  op +x2 + x1;
            st.push(ans);
        }
    }
    cout<<"Infix expression of postfix is : "<<st.top();
    return 0;
}