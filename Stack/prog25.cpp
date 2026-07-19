Try Again
// WAP for solving prefix expression
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    string str = "-/*+79483";
    stack<int>st;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57){
            st.push(str[i]-48);
        }
        // Code for subtract operator
        else if(str[i]=='-'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x1 - x2;
            st.push(ans);
        }
        // Code for addition operator
        else if(str[i]=='+'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x1 + x2;
            st.push(ans);
        }
        // Code for multiplication operator
        else if(str[i]=='*'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x1 * x2;
            st.push(ans);
        }
        // Code for division operator
        else if(str[i]=='/'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x1 / x2;
            st.push(ans);
        }
    }
    cout<<"The solution of the prefix expression is : "<<st.top();
    return 0;
}