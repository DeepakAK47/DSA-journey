//(***)
// WAP to solve infix operation using stack
#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

int solve(int x1,int x2,char ch){
if(ch=='+') return x2 + x1;
else if(ch=='-') return x2-x1;
else if(ch=='*') return x2*x1;
else if(ch=='/') return x2/x1;
}

int main(){
    string str = "2*4-5/6+3+4-4";
    stack<int>st;
    stack<char>op;
    for(int i=0;i<str.size();i++){
        if(str[i]>=48 && str[i]<=57){
            st.push(str[i]-48);
        }
        else{
            if(op.size()==0) op.push(str[i]);
            else if(priority(str[i]) > priority(op.top())) op.push(str[i]);
            else{
                while( op.size()>0 && priority(op.top())>= priority(str[i]))  {
                    int x1 = st.top();
                    st.pop();
                    int x2 = st.top();
                    st.pop();
                    char ch = op.top();
                    int ans = solve(x1,x2,ch);
                    op.pop();
                    st.push(ans);
                }
                op.push(str[i]);
            }
        } 
    }

        while(op.size()!=0){
            int x1 = st.top();
            st.pop();
            int x2 = st.top();
            st.pop();
            char ch = op.top();
            int ans = solve(x1,x2,ch);
            op.pop();
            st.push(ans);
        }
    cout<<"The answer of the infix expression is : "<<st.top();
    return 0;
}