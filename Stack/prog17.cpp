//(*** )
// WAP to solve infix expression which also contains bracket also
// doubt -> This program is unable to solve double digit problem.

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
    string str = "5+5*(5+1)";
    stack<int>st;
    stack<char>op;
    for(int i=0;i<str.size();i++){
        if(str[i]>=48 && str[i]<=57){
            st.push(str[i]-48);
        }
        else{
            if(op.size()==0) op.push(str[i]);
            else if(str[i]=='(') op.push(str[i]);
            else if(op.top()=='(') op.push(str[i]);
            else if(str[i]==')'){
                while(op.size()>0 && op.top()!='('){
                    int x1 = st.top();
                    st.pop();
                    int x2 = st.top();
                    st.pop();
                    char ch = op.top();
                    int ans = solve(x1,x2,ch);
                    op.pop();
                    st.push(ans);
                }
                op.pop();
            }
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
    cout<<"The answer of the infix expression is : "<<st.top()<<endl;
    cout<<"Rechecking answer : "<<5+5*(5+1);
    return 0;
}