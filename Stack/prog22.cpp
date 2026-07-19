Try again
// WAP to solve the postposfix expression
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str = "264*8/+3-";
    stack<int>st;
    for(int i=0;i<str.size();i++){
        if(str[i]>=48 && str[i]<=57){
            st.push(str[i]-48);
        }
        // For addition
        else if(str[i]=='+'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x1 + x2;
            st.push(ans);
        }
        // for subtraction
                else if(str[i]=='-'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x2 - x1;
            st.push(ans);
        }
        // for multiplication
                else if(str[i]=='*'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x1 * x2;
            st.push(ans);
        }
        // for division
                else if(str[i]=='/'){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            int ans = x2 / x1;
            st.push(ans);
        }
    }
    cout<<"The solution of the postfix expression is : "<<st.top()<<endl;
    return 0;
}