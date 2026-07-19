-> Try again
// IMP
// WAP to check whether the given string is balance or not
#include<iostream>
#include<stack>
using namespace std;
bool balanceBracket(string str){
    stack<char>st;
    if((str.size())%2!=0){
        return false;
    }
    for(int i=0;i<str.size();i++){
    if(str[i]=='('){
        st.push('(');
    }
    // special case
    else if(str[i]==')'){
        if(st.size()==0){     // !IMPORTANT
            return false;
        }
        st.pop();
    }
    }
    return true;
}
int main(){
    string str = "((()(()))))";
    cout<<"The given string is : "<<balanceBracket(str);
    return 0;
}